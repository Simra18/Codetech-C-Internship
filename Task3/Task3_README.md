# Task 3: Lexical Analyzer in C

> **Intern:** Simra Fatima  
> **Intern ID:** CT04DF2527  
> **Domain:** C Programming  
> **Organization:** Codtech IT Solutions  
> **Internship Duration:** 4 Weeks (June–July 2025)

---

## Description:
> This task demonstrates a basic **Lexical Analyzer** written in C, simulating the first phase of a compiler.

The program accepts a line or block of C code from the user and scans it to identify:

- **Keywords** (like `int`, `if`, `return`)
- **Operators** (such as `+`, `=`, `;`)
- **Identifiers** (variable names, user-defined names)

The implementation uses standard C functions like `fgets()` for input and `strtok()` for tokenization.  
Each token is then classified using a comparison against predefined lists of keywords and operators.  
This task integrates concepts from **string manipulation**, **arrays**, **parsing logic**, and basic **compiler design**.

---

## Files:

| File | Description |
|------|-------------|
| `task3.c` | Main source code to tokenize and classify parts of C code |
| `README.md` | This file, explaining the task and how to use the program |

---

## How to Compile and Run:

Use any C compiler like `gcc`:

```bash
gcc task3.c -o task3
./task3
```
---
## Sample Output:

```bash
Enter a line of C code:
int a = b + 5;

Tokens identified:
Keyword: int
Identifier: a
Operator: =
Identifier: b
Operator: +
Identifier: 5
Operator: ;
```
---

