# CS252 Operating Systems Assignment

This repository contains solutions to Problem 2.24 and 4.22 from the textbook **Operating System Concepts 10th Edition** by **Abraham Silberschatz**, Peter Baer Galvin and Greg Gagne.

- Name: Rupankar Das
- Roll No: 201ME148

## [Problem 2.24](problem_2_24/)

**Problem Statement:**  
 In Section 2.3, we described a program that copies the contents of one file to a destination file. This program works by first prompting the user for the name of the source and destination files. Write this program using either the POSIX or Windows API. Be sure to include all necessary error checking, including ensuring that the source file exists.  
 Once you have correctly designed and tested the program, if you used a system that supports it, run the program using a utility that traces system calls. Linux systems provide the strace utility, and macOS systems use the dtruss command. (The dtruss command, which actually is a front end to dtrace, requires admin privileges, so it must be run using sudo.) These tools can be used as follows (assume that the name of the executable file is FileCopy:

**Linux:**

```
strace ./FileCopy
```

**macOS:**

```
sudo dtruss ./FileCopy
```

Since Windows systems do not provide such a tool, you will have to trace through the Windows version of this program using a debugger.

## [Problem 4.22](problem_4_22/)

**Problem Statement:**  
Write a multithreaded program that calculates various statistical values for a list of numbers. This program will be passed a series of numbers on the command line and will then create three separate worker threads. One thread will determine the average of the numbers, the second will determine the minimum value, and the third will determine the maximum value.

For example, suppose the program is passed the integers

```
    90 81 78 95 79 72 85
```

The program will report

```
    The average value is 82
    The minimum value is 72
    The maximum value is 95
```
