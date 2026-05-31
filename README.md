# Employee-Management-System-in-c

 Employee Management System in C

## Overview

This repository contains a menu-driven Employee Management System developed in C using structures, functions, and file handling. The application allows users to manage employee records efficiently through a simple console-based interface.

Employee records are stored in a text file, allowing data to persist even after the program is closed.

The project is useful for:

* Beginners learning C programming
* Understanding structures and file handling
* College laboratory exercises
* Mini-project development
* Programming interview preparation
* Learning record management systems

---

## Features

* Add Employee Records
* Display All Employees
* Search Employee by ID
* Find Highest Salary Employee
* Store Employee Data in Files
* Menu-Driven Interface
* Persistent Data Storage

---

## Programs Included

### 1. Add Employee

This feature allows users to enter employee details and store them in a file.

#### Input Example

```text
Enter Employee ID: 101
Enter Employee Name: Harsha
Enter Salary: 45000
```

#### Output Example

```text
Employee added successfully.
```

#### Concepts Used

* Structures
* File handling
* User input
* Data storage

---

### 2. Display Employees

This feature reads all employee records from the file and displays them.

#### Output Example

```text
===== Employee Records =====

ID     : 101
Name   : Harsha
Salary : 45000

ID     : 102
Name   : Rahul
Salary : 55000
```

#### Concepts Used

* File reading
* Structures
* Loops
* Record retrieval

---

### 3. Search Employee

This feature searches for an employee using the Employee ID.

#### Input Example

```text
Enter Employee ID to search: 102
```

#### Output Example

```text
Employee Found

ID     : 102
Name   : Rahul
Salary : 55000
```

#### Concepts Used

* Searching techniques
* Conditional statements
* File processing
* Record management

---

### 4. Find Highest Salary Employee

This feature identifies and displays the employee with the highest salary.

#### Output Example

```text
===== Highest Salary Employee =====

ID     : 102
Name   : Rahul
Salary : 55000
```

#### Concepts Used

* Structure comparison
* File traversal
* Maximum value logic
* Record analysis

---

## Technologies Used

* C Programming Language
* GCC Compiler
* VS Code
* CodeBlocks
* Turbo C

---

## Project Structure

```text
employee-management-system/
│
├── employee_management.c
├── employee.txt
└── README.md
```

---

## How to Compile

Compile the program:

```bash
gcc employee_management.c -o employee
```

Run the program:

```bash
./employee
```

---

## Sample Menu

```text
===== Employee Management System =====

1. Add Employee
2. Display Employees
3. Search Employee
4. Highest Salary
5. Exit

Enter choice:
```

---

## Learning Outcomes

After completing this project, you will understand:

* Structure declaration and usage
* File handling operations
* Reading and writing records
* Searching records from files
* Function-based programming
* Menu-driven applications
* Data persistence techniques

---

## Future Improvements

Possible future additions:

* Update Employee Details
* Delete Employee Records
* Sort Employees by Salary
* Department Management
* Employee Attendance System
* Payroll Management
* Binary File Storage
* Employee Performance Tracking

---

## Author

**Harsha G**

Learning:

* C Programming
* Embedded Systems
* Python Development
* IoT Systems
* Problem Solving
