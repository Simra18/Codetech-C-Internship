# Task 3: Lexical Analyzer in C

**Intern:** Simra Fatima  
**Intern ID:** CT04DF2527  
**Domain:** C Programming  
**Organization:** Codtech IT Solutions  
**Internship Duration:** 4 Weeks 

---

## Description:

This task demonstrates a basic **Lexical Analyzer** written in C, simulating the first phase of a compiler.
The program accepts a single line (or block) of C code from the user and analyzes it to identify:

- **Keywords** — e.g., `int`, `if`, `return`
- **Operators** — e.g., `+`, `=`, `;`
- **Identifiers** — e.g., variable names, constants

The logic is implemented using:
- `fgets()` for safe multi-word input  
- `strtok()` to tokenize the input string  
- Arrays and `strcmp()` to classify each token based on predefined keyword/operator lists

This task combines principles of **token parsing**, **string manipulation**, and **basic compiler design logic**.

---

## Deliverables:

| File Name   | Type          | Purpose                                                                 |
|-------------|---------------|-------------------------------------------------------------------------|
| [`task3.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task3/task3.c)   | Source Code   | Core implementation of the lexical analyzer — accepts C code input, tokenizes it using `strtok()`, and classifies each token as a keyword, operator, or identifier. |
| [`Task3_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task3/Task3_README.md) | Documentation | Contains task objective, program flow, compilation instructions, detailed logic explanation, and sample terminal output. |

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
