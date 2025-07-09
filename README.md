# Codetech C Internship

> Completion of four core C programming tasks involving file handling, data structures, lexical analysis, and compression, developed as part of my internship at Codtech IT Solutions.
## Internship Details

- **Company:** Codtech IT Solutions  
- **Intern Name:** Simra Fatima  
- **Intern ID:** CT04DF2527 
- **Domain:** C Programming  
- **Duration:** 4 Weeks  
- **Mentor:** Neela Santhosh Kumar
  
---

## Deliverables

| Task | Description | Folder | Files |
|------|-------------|--------|--------|
| Task 1 | File operations: create, write, append, read | [Task1](https://github.com/Simra18/Codetech-C-Internship/tree/main/Task1) | [`task1.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/task1.c), [`data.txt`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/data.txt), [`Task1_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/Task1_README.md) |
| Task 2 | Singly Linked List with insert, delete, display | [Task2](https://github.com/Simra18/Codetech-C-Internship/tree/main/Task2) | [`task2.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task2/task2.c), [`Task2_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task2/Task2_README.md) |
| Task 3 | Lexical analyzer to detect keywords, operators, identifiers | [Task3](https://github.com/Simra18/Codetech-C-Internship/tree/main/Task3) | [`task3.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task3/task3.c), [`Task3_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task3/Task3_README.md) |
| Task 4 | RLE compression and decompression program | [Task4](https://github.com/Simra18/Codetech-C-Internship/tree/main/Task4) | [`task4.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task4/task4.c), [`Task4_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task4/Task4_README.md) |

> Each task is organized in its own folder with source code, explanation, and sample output in a dedicated `README.md`.

---

## Task Description:

### Task 1 – File Handling

- **Objective:** Build a menu-driven program in C that performs fundamental file operations — creation, writing, appending, and reading — using a single file (`data.txt`).
  
- **Key Concepts Used:** File pointers (`FILE *`), file modes (`w`, `a`, `r`), character and string I/O, buffer handling, and basic menu control with `switch` and `do-while`.

- **Concept Overview:**
File handling in C enables programs to store and retrieve data from external files, allowing persistent data beyond runtime. It is essential for applications that require long-term data storage, such as logging or configuration management. This program demonstrates file creation, writing, appending, and reading using standard C I/O functions in a menu-driven interface.

- **Files:**
  - `task1.c` — Handles the file operations using `fopen()`, `fputs()`, `fgetc()`, with input captured using `fgets()` for multi-line support.
    
  - `data.txt` — The output file used to store and view written/appended data.
    
  - `Task1_README.md` — Describes program flow, compilation steps, and real terminal sample output for verification.

---
### Task 2 – Singly Linked List

- **Objective:** Implement a dynamic singly linked list that supports inserting nodes, deleting nodes by value, and displaying the entire list structure.
  
- **Key Concepts Used:** `struct`, dynamic memory allocation (`malloc` and `free`), pointer manipulation, list traversal, and user-controlled operations via a menu interface.
  
- **Concept Overview:**
A singly linked list is a dynamic data structure where elements (nodes) are linked sequentially through pointers. It allows efficient memory usage and flexibility compared to static arrays. This task showcases how to manage data in real-time using dynamic memory with insertion, deletion, and display features.

- **Files:**
  - `task2.c` — Defines the `Node` structure and includes functions for insert, delete, and display operations.
    
  - `Task2_README.md` — Outlines how the linked list is constructed, how each function behaves, how to compile/run the program, and includes formatted sample I/O.

---

### Task 3 – Lexical Analyzer

- **Objective:** Simulate a basic lexical analyzer that classifies parts of C code (input by user or through string) into keywords, operators, and identifiers — mimicking the first phase of a compiler.
  
- **Key Concepts Used:** Token parsing, string manipulation, arrays of C keywords/operators, `strcmp()`, and character classification.
  
- **Concept Overview:**
A lexical analyzer is the first step of a compiler, breaking code into tokens to prepare for syntax and semantic analysis. This task simulates lexical analysis by identifying elements of C syntax from a user-input string and classifying them using comparisons with predefined keyword/operator arrays.
  
- **Files:**
  - `task3.c` — Scans input strings and separates them into tokens, checking each token against predefined keyword/operator lists and displaying its classification.
    
  - `Task3_README.md` — Describes the lexical analysis process, flow of token detection, and includes a sample breakdown of input/output tokens.

---

### Task 4 – Run-Length Encoding (RLE)

- **Objective:** Create an RLE-based compression and decompression utility that allows the user to either compress or decompress strings, demonstrating efficient encoding logic.
  
- **Key Concepts Used:** Loops, string traversal, conditionals, numeric conversion (`isdigit()`), `fgets()` input handling, and custom compression/decompression logic.

- **Concept Overview:**
  Run-Length Encoding is a basic form of data compression that reduces repeated characters into a single character and count (e.g., "aaabb" becomes "a3b2"). This task demonstrates both compression and decompression logic, helping understand how encoding algorithms manage data efficiently.
  
- **Files:**
  - `task4.c` — Contains both `compressRLE()` and `decompressRLE()` functions with clear logic for frequency encoding and decoding, all wrapped in a clean menu interface.
    
  - `Task4_README.md` — Explains the algorithm used, how user input is processed, and includes example compressed/decompressed outputs shown from real terminal runs.

---
## How to Compile & Run

To compile and run any of the C programs in this repository, use a standard C compiler such as `gcc`.

1. Open your terminal or command prompt.
2. Navigate to the folder of the task you want to run. For example:
   ```bash
   cd Task1
   ```
3.Compile the C file using:
 ```bash
gcc taskX.c -o taskX
 ```
>Replace taskX.c with the actual filename (e.g., task1.c, task2.c).
4.Run the compiled program:
```bash
./taskX
```
>Each folder also includes a dedicated README.md with task-specific compile instructions and sample output.
---
