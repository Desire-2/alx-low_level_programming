# 0x1C. C - Makefiles

## Overview

This repository contains a series of Makefiles for the "0x1C. C - Makefiles" project. The project aims to teach the fundamentals of make, Makefiles, and related concepts in C programming. The tasks progress from basic Makefile creation to more advanced features.

## Project Details

- **Author:** Julien Barbier
- **Weight:** 1
- **Start Date:** Dec 20, 2023 6:00 AM
- **End Date:** Dec 29, 2023 6:00 AM

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain the concepts of make and Makefiles.
- Understand when, why, and how to use Makefiles.
- Define and use rules in Makefiles, both explicit and implicit.
- Identify and utilize common and useful rules.
- Work with variables in Makefiles.
- Ensure compliance with copyright and plagiarism guidelines.

## Project Structure

The project is divided into several tasks, each building on the previous one. Here's an overview of the tasks:

1. **0-Makefile:** Create the first Makefile with a specific set of requirements.

2. **1-Makefile:** Enhance the Makefile by introducing variables for the compiler and source files.

3. **2-Makefile:** Develop a more useful Makefile by introducing object files and executable name variables.

4. **3-Makefile:** Extend the Makefile to include additional rules for cleaning and recompiling.

5. **4-Makefile:** Create a complete Makefile with additional compiler flags.

6. **5-island_perimeter.py:** Implement a Python script for calculating the perimeter of an island in a grid.

7. **100-Makefile:** An advanced Makefile with specific constraints and optimizations.

## Usage Instructions

To compile and run the provided Makefiles, follow these general steps:

1. Ensure you are using an allowed editor: vi, vim, or emacs.
2. Use the specified operating system: Ubuntu 20.04 LTS.
3. Confirm the versions of gcc and make: gcc 9.3.0, GNU Make 4.2.1.
4. Clone the GitHub repository:

    ```bash
    git clone https://github.com/<username>/alx-low_level_programming.git
    ```

5. Navigate to the project directory:

    ```bash
    cd alx-low_level_programming/0x1C-makefiles
    ```

6. Follow the instructions for each task by running the make command with the appropriate Makefile:

    ```bash
    make -f <Makefile_name>
    ```

7. Review the output and ensure that the compilation and execution meet the specified requirements.

## Task-Specific Details

### Task 0 - 0-Makefile

- Name of the executable: school
- Rules: all
- Variables: none

### Task 1 - 1-Makefile

- Name of the executable: school
- Rules: all
- Variables: CC, SRC

### Task 2 - 2-Makefile

- Name of the executable: school
- Rules: all
- Variables: CC, SRC, OBJ, NAME

### Task 3 - 3-Makefile

- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- Variables: CC, SRC, OBJ, NAME, RM

### Task 4 - 4-Makefile

- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS

### Task 5 - 5-island_perimeter.py

- Python script calculating the perimeter of an island in a grid.

### Task 6 - 100-Makefile

- Advanced Makefile with specific constraints and optimizations.
