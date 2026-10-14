# Student-Grade-Management-System
Student Grade Management System (C++)

1. Project Description

The Student Grade Management System is a simple console-based application developed using C++. It demonstrates how arrays can be used to store and process student information and examination scores.

The application allows users to enter student names and scores, calculate the average score, and identify the students with the highest and lowest scores.

This project was developed to demonstrate the practical application of arrays in programming.

2. Project Objectives

* Understand how arrays work in C++.
* Store multiple student names and scores.
* Use loops to process student records.
* Calculate the average score.
* Identify the highest and lowest scores.
* Practise compiling, testing, and managing a C++ project using GitHub.

3. Features

* Student Data Entry: Enter the names and scores of students.
* Array Storage: Store student names and scores in arrays.
* Input Validation: Accept between 1 and 100 students and scores between 0 and 100.
* Average Calculation: Calculate the average score of all students.
* Highest Score: Identify the highest score and the student who achieved it.
* Lowest Score: Identify the lowest score and the student who achieved it.
* Results Display: Display each student’s name and score.

4. Technologies Used

* Programming Language: C++
* Compiler: GCC or another compatible C++ compiler
* Code Editor: Visual Studio Code, Code::Blocks, or any text editor
* Version Control: Git
* Hosting Platform: GitHub

5. Project Structure

Student-Grade-Management-System/
├── main.cpp
└── README.md

* main.cpp: Contains the C++ source code.
* README.md: Contains project information and instructions.

6. Requirements

To run this application, you need:

* A computer with a C++ compiler installed.
* A terminal or command prompt.
* The project source code (main.cpp).

You can install GCC through MinGW-w64 on Windows or through your operating system’s package manager on Linux.

7. How to Compile and Run

Step 1: Clone the Repository

Open your terminal and run:

git clone https://github.com/your-username/Student-Grade-Management-System.git

Replace your-username with your actual GitHub username. 

Step 2: Enter the Project Folder

cd Student-Grade-Management-System

Step 3: Compile the Program

If you have GCC installed, run:

g++ -std=c++17 -Wall -Wextra main.cpp -o student_grades

Step 4: Run the Application

On Windows:

student_grades.exe

On Linux or macOS:

./student_grades

8. Example Usage

STUDENT GRADE MANAGEMENT SYSTEM
Enter number of students (1-100): 3
Enter name of student 1: Ama
Enter score (0-100): 80
Enter name of student 2: Kofi
Enter score (0-100): 90
Enter name of student 3: Esi
Enter score (0-100): 70
--- STUDENT RESULTS ---
Ama: 80.00/100
Kofi: 90.00/100
Esi: 70.00/100
Average score: 80.00
Highest score: 90.00 (Kofi)
Lowest score: 70.00 (Esi)

9. How Arrays Are Used

Arrays are the main data structures used in this application.

The program uses:

* names[MAX] to store student names.
* scores[MAX] to store examination scores.

Each student has a corresponding index in both arrays. For example, names[0] and scores[0] represent the first student’s name and score.

A for loop processes the arrays to calculate the total score, average, highest score, and lowest score.

Arrays make the program easier to organize and process than declaring a separate variable for every student.

10. Testing

The application can be tested using the following cases:

Test Case	Expected Result
Enter valid student names and scores	Student results are displayed
Enter scores of 80, 90, and 70	Average is 80.00
Enter a score above 100	Error message is displayed
Enter a negative score	Error message is displayed
Enter zero students	Error message is displayed
Enter more than 100 students	Error message is displayed

11. Limitations

* The application supports a maximum of 100 students.
* Student records are not saved permanently after the program closes.
* The application uses a console interface rather than a graphical user interface.
* Each student name is entered as a single record, and scores are limited to the range 0–100.

12. Future Improvements

Possible improvements include:

* Saving student records to a file.
* Searching for students by name.
* Updating existing student scores.
* Assigning letter grades.
* Creating a graphical user interface.
* Using std::vector or structures to manage more flexible student records.

13. Conclusion

The Student Grade Management System demonstrates how arrays are used in a real-world educational application. It shows how C++ can store related information, process multiple records using loops, and perform calculations efficiently.

This project provides practical experience with arrays, input validation, loops, conditional statements, compilation, testing, and GitHub repository management.

14. Author

Project: Student Grade Management System
Language: C++
Purpose: Demonstration of arrays in a real-world application.
