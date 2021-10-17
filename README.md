# get_next_line - 42 School Project

[![akurz's 42Project Score](https://badge42.herokuapp.com/api/project/akurz/get_next_line)](https://github.com/JaeSeoKim/badge42)

## About
The goal of this project is to write a function which returns a line from a file descriptor.

Calling the function get_next_line in a loop will then allow you to read the text line
available on the file descriptor one line at a time until the end of the file descriptor.

The read must use the BUFFER_SIZE defined during compilation.

| Function name | get_next_line |
| :--- | :--- |
| Prototype | char *get_next_line(int fd) |
| Parameters | File descriptor to read from |
| Return value | Read line or NULL when theres nothing else to read |
| External functions | read, malloc, free |

## How to use:
Clone the repository:
```bash
https://github.com/42akurz/42_get_next_line.git
```
Make sure the get_next_line files are in the same repository that you want to call the function from

The program will be compiled in this way:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
```
> 42 can be replaced with any other value!
