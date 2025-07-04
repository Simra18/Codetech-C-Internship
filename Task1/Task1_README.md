# Task 1: File Handling in C

> - **Name:** Simra Fatima  
> - **Intern ID:** CT04DF2527  
> - **Domain:** C Programming  
> - **Organization:** Codtech IT Solutions  

### Description:
This menu-driven program demonstrates basic file handling operations using C. The user can:
- Create a new file (`data.txt`)
- Write text into the file
- Append additional lines
- Read and display file contents

---

### Files Included:
- [`task1.c`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/task1.c) – Source code implementing the menu-driven file handling system
- [`data.txt`](https://github.com/Simra18/Codetech-C-Internship/blob/main/Task1/data.txt)  – Output file generated and modified by the program



---

### How to Compile and Run:

```bash
gcc task1.c -o task1
./task1
```

---

### Sample Output:
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
I have created this File handling program to create, read, write and append. This is my first task from my C Programming internship provided by Codtech. I'm thankful and grateful to work for them. (written to file earlier)
(Appended text down)
regards,
Simra(intern)❤︎

===== File Handling Menu =====
Enter your choice (1–5): 5
Exiting program. Goodbye!

```
---

