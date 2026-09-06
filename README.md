# 🎓 University Management System (UMS)

A comprehensive University Management System that efficiently handles student records, course data, enrollment histories, and course registrations — built around a deliberate combination of classic data structures chosen to fit each type of academic data.

---

## 📖 Introduction

This project presents the design and implementation of a University Management System that provides fast access, scalability, and reliability by integrating multiple data structures, including **Singly and Doubly Linked Lists**, **Stacks**, **Queues**, **Binary Search Trees (BST)**, and **Hash Tables**.

The UMS enables universities to manage academic data effectively while optimizing operations such as searching, sorting, and enrollment management. Each type of data is organized using the most appropriate data structure to ensure maximum performance:

| Data | Structure Used |
|---|---|
| Student information | Singly Linked List (SLL) |
| Course details | Binary Search Tree (BST) |
| Enrollment histories | Doubly Linked List (DLL) |
| Prerequisite validation | Stack |
| Course waitlists | Queue |
| Search optimization | Linear & Binary Search / Hash Table |

This multi-structure approach ensures the system is efficient, scalable, and reliable, making it suitable for real-world academic data management.

---

## 🏗️ System Overview

### 1. Student Records Management
Student records are managed using a **Singly Linked List (SLL)**, allowing dynamic memory usage and easy insertion/deletion. Each record contains:
- ID
- Name
- Email
- Phone
- Address
- Password

**Functionalities:**
- `add()` — Add a new student
- `delete()` — Remove a student by ID
- `display()` — Print all student details

### 2. Course Records Management
Courses are stored in a **Binary Search Tree (BST)** for efficient searching and sorting. Each node contains:
- CourseID
- CourseName
- CourseCredits
- CourseInstructor

**Functionalities:**
- `addCourse()` — Add a new course
- `dropCourse()` — Remove a course

The BST ensures quick access: left subtrees contain smaller IDs, right subtrees contain larger IDs.

### 3. Course Enrollment History
A **Doubly Linked List (DLL)** tracks each student's enrollment history, allowing traversal in both directions and easy insertion/deletion.

**Functionalities:**
- `add()` — Add a new enrollment record
- `view()` — Display a specific student's enrollment history

### 4. Course Registration and Prerequisites
Course prerequisites are validated using a **Stack**, following Last In, First Out (LIFO) logic.

**Process:**
1. Push all required prerequisites onto the stack
2. Pop completed prerequisites based on the student's completed courses
3. If the stack is empty, the student is eligible to register

**Functionalities:**
- `validatePrerequisites(courseID, studentID)` — Check eligibility
- Display remaining prerequisites if validation fails

### 5. Course Waitlist Management
A **Queue** manages course waitlists, implementing First In, First Out (FIFO) logic.

**Functionalities:**
- `enqueue()` — Add a student to the waitlist when a course is full
- `dequeue()` — Enroll the first student on the waitlist when a spot opens

This ensures fair and efficient course enrollment management.

### 6. Search and Sort Operations
To optimize performance, search and sort algorithms are implemented for student and course records:
- **Linear Search** — Suitable for smaller datasets
- **Binary Search** — Used in the BST for faster course lookup
- **Hash Table** — Provides quick access to student records by ID

---

## 🧠 Data Structures Used

- Singly Linked List (SLL)
- Doubly Linked List (DLL)
- Binary Search Tree (BST)
- Stack
- Queue
- Hash Table

---

## ✅ Conclusion

The University Management System integrates multiple data structures and algorithms to handle academic operations efficiently. By combining SLL, DLL, BST, Stack, Queue, and Hash Table, the system provides fast access, easy data manipulation, and reliable course and student management.

This project demonstrates a practical application of data structures in software engineering, offering a robust solution for university administration.

---

## 🏷️ Keywords

University Management System, Linked List, Double Linked List, Binary Search Tree (BST), Stack, Queue, Hash Table, Data Structures, Course Registration, Student Records, Prerequisite Validation, Search Algorithms

---
