#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&c+b>a)
      cout<<"triangle";
    else 
      cout<<"no triangle";
    return 0;
}