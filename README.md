![image](https://www.worldatlas.com/r/w960-q80/upload/35/76/7b/shutterstock-260365799.jpg)
<h1>Simple Shell</h1>
Release date April 25, 2023

</p>
          </a>
          <a href="https://github.com/Bluebee45/holbertonschool-simple_shell/graphs/contributors" target="_blank">
               <img alt="contributors" src="https://img.shields.io/github/contributors/Ouyei/simple_shell" />
		   </a>
          </a>
          <a href="https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/README.md" target="_blank">
               <img alt="Documentation" src="https://img.shields.io/badge/documentation-yes-brightgreen" />
          </a>
     </p>

## Table of Contents
* [Introduction](#Introduction)
  * What is Shell
  * What is it for
* [Project Information](#Project-Information)
    * Tasks
    * Enviroment
    * General requirements
    * Allowed functions
* [Documentation](#Documentation)
    * Instalation
    * Testing
    * Files
    * Flowchart
* [Authors](#Authors)

## Introduction

### What is Shell
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type **`sh`** ([Bourne Shell](https://en.wikipedia.org/wiki/Bourne_shell)) will be developed. Users typically interact with a shell using a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that is used for entering data into and displaying or printing data from, a computer or a computing system.

### What is it for
This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at **`/bin/sh`**.

## Project Information

### Tasks

* Task 0. README, man_1_simple_shell, AUTHORS
* Task 1. Betty would be proud
* Task 2. Simple shell 0.1
* Task 3. Simple shell 0.2
* Task 4. Simple shell 0.3
* Task 5. Simple shell 0.4
* Task 6. Simple shell 1.0

### Enviroment

<!-- ubuntu -->
<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a> OS: Ubuntu 20.04 LTS
<!-- bash -->
<a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- c -->
<a href="https://www.cprogramming.com/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=C%20Language&color=5C6BC0&logo=c&logoColor=A8B9CC&labelColor=2F333A" alt="C Low level programming language"></a> Language: C
Compiler: gcc 9.3.0
<!-- vim -->
<a href="https://www.vim.org/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Vim&color=019733&logo=Vim&logoColor=019733&labelColor=2F333A" alt="Suite CRM"></a> Editor: VIM 8.1.2269
<!-- git -->
<a href="https://git-scm.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Git&color=F05032&logo=Git&logoColor=F05032&labelColor=2F333A" alt="git distributed version control system"></a> Control version: Git
<!-- github -->
<a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>

Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions used

* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fork` (man 2 fork)
* `free` (man 3 free
* `getline` (man 3 getline
* `isatty` (man 3 isatty)
* `malloc` (man 3 malloc)
* `perror`(man 3 perror)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `write` (man 2 write)

## Documentation

### Installation

- Clone this repository: `git clone "https://github.com/Bluebee45/simple_shell"`
- Change directories into the repository: `cd simple_shell`
- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- Run the shell in interactive mode: `./hsh`
- Or run the shell in non-interactive mode: example `echo "Hello world!" | ./hsh`

### Testing

First compile and then run the executable file on your terminal
For compile see [Installation](#installation) section

### Files

|File|Description|
|---|---|
|[AUTHORS](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/AUTHORS)|Contributors in this repository|
|[README.md](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/README.md)|Information about our repository|
|[string.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/string.c )|compares strings to find dir.|
|[shell.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/shell.c)|func with infinite loop|
|[prompt.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/prompt.c)|call prompt from another function (prompt)|
|[gas.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/gas.c)|finds command to execute in path routes.|
|[execute.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/execute.c)|similar to puts in C| functions||[hsh_string_foos.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_string_foos.c)|Function to work and modifie string|
|[engine.c](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/engine.c)|identifies if first char is a slash.|
|[man_1_simple_shell](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/man_1_simple_shell)|Manual page our of Simple Shell|
|[shell.h](https://github.com/Bluebee45/holbertonschool-simple_shell/blob/master/shell.h)|Prototypes functions and headers|

## Flowchart

![Image](https://i.ibb.co/T11gywq/Untitled-Diagram.png)

## Authors

<li> Santiago Espejo - <a href="https://github.com/Bluebee45">Bluebee45</a></li>
<li> Juan Daniel Restrepo - <a href="https://github.com/JDaniel26-Bory">JDaniel26-Bory</a></li>
