#include <stdio.h>
#include <memory.h>
#include <string.h>

typedef struct {
    char name[10];
    int roleCount;
    int permissionCount;
    char *roles[10];
    char *permissionNames[10];
    int permissionLevel[10]; 
} User;

typedef struct {
    char name[10];
    int permissionCount;
    char *permissions[10];
    int permissionMaxLevel[10];
} Role;

int main() {
    int p, q, r, s, t, u;
    int i, j, k, l, m;
    char c;
    User userList[100];
    Role roleList[100];
    char *permissionList[100];
    int permissionMaxLevel[100] = {0};

    //read all the permission definition
    scanf("%d", &p);
    for (i = 0; i < p; ++i) {
        char temp[10] = {0};
        k = 0;
        while ((c = getchar()) != ':' && c != '\n' && c != EOF) {
            temp[k++] = c;
        }// exit at :, so if there is any number it should be right behind. Otherwise it reads an \n
        permissionList[i] = temp; // store the pm name
        permissionMaxLevel[i] = 0; //if no permission system, set 0 as a mark.
        if (c == ':') { // make sure the program does not eat any more stdio with the getchar()
            if ((c = getchar()) >= '0' && c <= '9') permissionMaxLevel[i] = c - '0'; // double check. 
        }
    }

    //read all the role definition
    scanf("%d", &r);
    for (i = 0; i < r; ++i) {
        scanf("%s %d", &roleList[i].name, &roleList[i].permissionCount);
        for (j = 0; j < roleList[i].permissionCount; j++){
            char temp[10] = {0};
            k = 0;
            while ((c = getchar()) != ':' && c != '\n' && c != EOF){
                temp[k++] = c;
            } // exit at :, so if there is any number it should be right behind. Otherwise it reads an \n
            roleList[i].permissions[j] = temp; // store the pm name
            roleList[i].permissionMaxLevel[j] = 0; //if no permission system, set 0 as a mark.
            if (c == ':'){ // make sure the program does not eat any more stdio with the getchar()
                if ((c = getchar()) >= '0' && c <= '9')
                    roleList[i].permissionMaxLevel[j] = c - '0'; // double check.
            }
        }
    }

    //read all the user definition
    scanf("%d", &u);
    for (i = 0; i < u; ++i) {
        scanf("%s %d", &userList[i].name, &userList[i].roleCount);
        for (j = 0; j < userList[i].roleCount; j++){
            scanf("%s", userList[i].roles[j]);
        }
    }

    //map user's role to their permission(slowest operation)
    for (i = 0; i < u; ++i) {
        for (j = 0; j < userList[i].roleCount; ++j) {
            // retrieve role info -> loop and judge the permission for repetition -> if repeat, compare permission and current user level to update -> go on like this
            for (k = 0; k < r; ++k) {
                if (strcmp(roleList[k].name, userList[i].roles[j]) == 0) { //find the corresponding role first
                    
                    for (m = 0; m < roleList[k].permissionCount; ++m) { 
                        int found = 0;
                        for (l = 0; l < userList[i].permissionCount; ++l) {//dual pointer, parallel search to determine whether it is here already
                            if (strcmp(userList[i].permissionNames[l], roleList[k].permissions[m]) == 0) {
                                found = 1;
                                if (userList[i].permissionLevel[l] < roleList[k].permissionMaxLevel[m]) {
                                    userList[i].permissionLevel[l] = roleList[k].permissionMaxLevel[m];
                                }
                            }
                        }
                        if (!found) {
                            userList[i].permissionNames[++userList[i].permissionCount] = roleList[k].permissions[m];
                        }
                    }
                    
                }
            }
        }
    }

    // handle queries

    scanf("%d", &q);
    char queryName[10] = {0};
    char queryPermission[10] = {0};
    int queryPermissionLevel = 0;
    int compared = 0;
    for (i = 0; i < q; ++i) {
        scanf("%s", queryName);
        compared = 0;

        // first judge if the query has level
        k = 0;
        while ((c = getchar()) != ':' && c != '\n' && c != EOF)
        {
            queryPermission[k++] = c;
        }
        if (c == ':')
        {
            if ((c = getchar()) >= '0' && c <= '9')
                queryPermissionLevel = c - '0';
        }
        // then go and see if they really have the permission
            // find the person
        for (j = 0; j < u; ++j) {
            if (strcmp(userList[j].name, queryName) == 0) { //found person
                for (k = 0; k < userList[j].permissionCount; ++k) {
                    if (strcmp(userList[j].permissionNames[k], queryPermission) == 0) { //found permission
                        compared = 1;
                        if (userList[j].permissionLevel[k] == 0) {
                            printf("true\n");
                        }
                        else if (userList[j].permissionLevel[k] >= queryPermissionLevel && queryPermissionLevel != 0) {
                            printf("true\n");
                        }
                        else if (userList[j].permissionLevel[k] != 0 && queryPermissionLevel == 0) {
                            printf("%d\n", userList[j].permissionLevel[k]);
                        }
                        else {
                            printf("false\n");
                        }
                    }
                }
            }
        }
        
        if (!compared) {
            printf("false\n");
        }
    }
}