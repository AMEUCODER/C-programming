# C Programming

My C programming journey in one place: lab exercises from university, small personal projects, and reusable libraries I build along the way.

## Repository structure

| Folder | What's inside |
|---|---|
| [`university-tps/`](university-tps/) | Lab exercises (TP 1–10) from the *Atelier Programmation 1* course at ISET Mahdia |
| [`projects/`](projects/) | Small standalone C programs and mini-projects |
| [`libs/`](libs/) | Reusable C code (headers + sources + tests) that I extract and improve over time |
| [`notes/`](notes/) | Cheatsheets and personal notes (pointers, strings, ASCII table, etc.) |

## University TPs

Course: **Atelier Programmation 1**, Technologies de l'informatique, ISET Mahdia.

| TP | Topic |
|---|---|
| [TP 1](university-tps/tp01/) | Discovering the C environment (Code::Blocks) |
| [TP 2](university-tps/tp02/) | Simple instructions: variables, constants, operators |
| [TP 3](university-tps/tp03/) | Conditional structures: `if` and `switch` |
| [TP 4](university-tps/tp04/) | Increment and decrement operators |
| [TP 5](university-tps/tp05/) | Conditional structures: `if` and `switch` (practice) |
| [TP 6](university-tps/tp06/) | Loops: `for`, `while`, `do...while` |
| [TP 7](university-tps/tp07/) | _add topic_ |
| [TP 8](university-tps/tp08/) | Strings (1): manual implementations, e.g. length without `strlen` |
| [TP 9](university-tps/tp09/) | Strings (2): `<string.h>` functions (`strcmp`, ...) |
| [TP 10](university-tps/tp10/) | Functions |

> The exercise sheets and corrections belong to the course and are not included here. Only my own solutions are.

## How to compile and run

Any exercise compiles with GCC:

```bash
gcc -Wall -Wextra university-tps/tp06/ex01_factorial.c -o ex01
./ex01
```

On Windows, use MinGW or Code::Blocks. The `.exe` / `.o` build files are ignored by Git.

## What I'm learning

- Core syntax: variables, operators, control flow
- Strings and manual memory-free text processing
- Functions and program structure
- Next: arrays, pointers, structs, dynamic memory, file I/O

## Roadmap

- [ ] Finish organizing all TP solutions
- [ ] Add arrays, pointers and structs exercises
- [ ] Build first reusable lib in `libs/` (dynamic array or linked list)
- [ ] First small project in `projects/`

## Author

Built by a student learning C, one exercise at a time. See my other repositories for Python, OpenCV and pandas work.
