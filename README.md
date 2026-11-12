# C 语言学习作业

[![OctoCounts](https://api.octocounts.com/badge/HuBowen1031/Hu-Bowen/branch/main)](https://octocounts.com/github/HuBowen1031/Hu-Bowen/tree/main?analysis=%7B%22ignoredDirs%22%3A%5B%5D%2C%22ignoredLanguages%22%3A%5B%5D%2C%22profile%22%3A%22default%22%2C%22includeDocs%22%3Afalse%2C%22includeTests%22%3Afalse%2C%22includeGenerated%22%3Afalse%7D)

这个仓库是我学习 **C 语言** 过程中写的代码集合，主要包含大学课程作业、课后练习、课堂示例，以及一些 ACM / 在线评测平台的题目解答。

写这些代码的目的主要是练习语法、算法和调试，因此部分程序只是实验性质的草稿（文件名也相对随意），并不追求工程上的规范性。

## 目录结构

| 路径 | 说明 |
| --- | --- |
| `Homework01/` ~ `Homework06/` | 各次课程作业，按单元命名（如 `u1_1_getMinNum3.c` 表示第 1 单元第 1 题） |
| `CourseExercise05/` | 课程练习 |
| `modularProgrammingTest/` | 模块化编程练习（多文件 + 头文件） |
| `acm*.c` | ACM / 在线评测题目的解答，如大数乘法、矩阵对角线、单词统计等 |
| `EX7.6-2.c`、`U01AS03.c`、`u06as01.c` 等 | 教材习题与课程指定的其他练习 |
| 其余 `*.c` | 学习过程中随手写的小程序：排序、字符串处理、浮点数精度、指针、数组越界等实验 |

> 目录中的同名无后缀文件和 `.dSYM/` 目录是 macOS 下 Clang 编译生成的产物，可以忽略。

## 编译与运行

所有程序均为单文件 C 程序（少数为 C++），可以直接用 `clang` 或 `gcc` 编译：

```bash
clang -Wall -Wextra -o program program.c
./program
```

模块化编程的示例需要把多个源文件一起编译：

```bash
clang -Wall -o program modularProgrammingTest/U06-6.2-2-0.c
```

## 说明

- 代码仅用于学习与记录，部分实现可能不够完善。
- 欢迎交流指正，但不建议直接用于任何生产环境。
