# Task 1: File Handling in C

**Intern:** Simra Fatima  
**Intern ID:** CT04DF2527  
**Domain:** C Programming  
**Organization:** Codtech IT Solutions  
**Internship Duration:** 4 Weeks 

---

## Description:
File handling in C enables a program to store and retrieve data from external files, allowing persistent data management beyond runtime. It plays a crucial role in real-world applications such as logging systems, configuration files, and data storage utilities.
This task demonstrates a **menu-driven file handling program** written in C.  
The program allows the user to perform the following operations on a text file named `data.txt`:

- **Create** a new file
- **Write** content to the file (overwrite mode)
- **Append** additional text to the existing file
- **Read** and display the file’s contents

The implementation makes use of:
- File operations using `fopen()`, `fputs()`, and `fgetc()`
- Input handling with `fgets()` for multi-line support
- Switch-case control structure for menu navigation

---

## Deliverables

| File Name   | Type          | Purpose                                                                 |
|-------------|---------------|-------------------------------------------------------------------------|
| [`task1.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/task1.c)   | Source Code   | C program to perform file creation, writing, appending, and reading using a structured menu-driven interface. |
| [`data.txt`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/data.txt)  | Sample Output | A text file created and modified by the program based on user input.   |
| [`Task1_README.md`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/Task1_README.md) | Documentation | This file containing task explanation, usage instructions, and output demonstration. |

---
## Sample Output:

```bash
===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit

Enter your choice (1–5): 1
File 'data.txt' created successfully.

===== File Handling Menu =====
Enter your choice (1–5): 2
Enter text to write to the file:
I have created this File handling program to create, read, write and append.
This is my first task from my C Programming internship provided by Codtech.
I'm thankful and grateful to work for them. (written to file earlier)
Data written to 'data.txt'.

===== File Handling Menu =====
Enter your choice (1–5): 3
Enter text to append to the file:
(Appended text down)
Data appended to 'data.txt'.

Enter text to append to the file:
regards,
Data appended to 'data.txt'.

Enter text to append to the file:
Simra(intern)❤︎
Data appended to 'data.txt'.

===== File Handling Menu =====
Enter your choice (1–5): 4
Contents of 'data.txt':
I have created this File handling program to create, read, write and append.
This is my first task from my C Programming internship provided by Codtech.
I'm thankful and grateful to work for them. (written to file earlier)
(Appended text down)
regards,
Simra(intern)❤︎

===== File Handling Menu =====
Enter your choice (1–5): 5
Exiting program. Goodbye!

```
---
