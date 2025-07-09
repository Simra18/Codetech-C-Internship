# Task 4: Run-Length Encoding (RLE) in C

**Intern:** Simra Fatima  
**Intern ID:** CT04DF2527  
**Domain:** C Programming  
**Organization:** Codtech IT Solutions  
**Internship Duration:** 4 Weeks 

---

## Description:

This task focuses on implementing **Run-Length Encoding (RLE)** — a basic compression algorithm — using the C programming language.
The program allows users to:
- **Compress** a string using RLE format (e.g., `"aaabb"` → `"a3b2"`)
- **Decompress** an encoded string back to its original form (e.g., `"a3b2"` → `"aaabb"`)

It uses conditional logic, string traversal, and character counting to simulate basic data compression techniques.

This task demonstrates practical use of:
- Loops and conditionals  
- String manipulation using `strlen()`, `isdigit()`  
- User input/output handling via `fgets()` and character arrays

---

## Deliverables

| File Name   | Type          | Purpose                                                                 |
|-------------|---------------|-------------------------------------------------------------------------|
| [`task4.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task4/task4.c)   | Source Code   | Full implementation of the RLE compression and decompression logic. Presents a menu to the user to choose between encoding or decoding. |
| [`Task4_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task4/Task4_README.md) | Documentation | Explains the task, usage instructions, logic used for RLE encoding/decoding, compilation steps, and sample input/output. |

---
## Sample Output:

```bash
===== RLE Compression Menu =====
1. Compress String
2. Decompress String
3. Exit
Enter your choice: 1
Enter a string to compress: aaabbbccdaa
Compressed Output: a3b3c2d1a2

===== RLE Compression Menu =====
Enter your choice: 2
Enter an RLE string to decompress: a3b3c2d1a2
Decompressed Output: aaabbbccdaa

Enter your choice: 3
Exiting program.
```
---
