# Student Grade Management System (C++)

## Project description
A beginner-friendly console application demonstrating how arrays can store and process student names and examination scores. It calculates the class average and identifies the highest and lowest scores.

## Features
- Enter between 1 and 100 students.
- Store student names and scores in arrays.
- Validate scores from 0 to 100.
- Display each student's score.
- Calculate the average score.
- Identify the highest and lowest scores and the students who achieved them.

## Technologies
- C++
- A C++17-compatible compiler such as GCC
- Git and GitHub for version control and source-code hosting

## Project files
```text
Student-Grade-Management-System/
├── main.cpp
└── README.md
```

## Compile and run

### 1. Clone the repository
After uploading this project to your GitHub account, replace `YOUR-USERNAME` with your GitHub username:

```bash
git clone https://github.com/YOUR-USERNAME/Student-Grade-Management-System.git
cd Student-Grade-Management-System
```

### 2. Compile with GCC
```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o student_grades
```

### 3. Run the program
- **Windows:** `student_grades.exe`
- **Linux/macOS:** `./student_grades`

## Example
Input:
```text
Enter number of students (1-100): 3
Enter name of student 1: Ama
Enter score (0-100): 80
Enter name of student 2: Kofi
Enter score (0-100): 90
Enter name of student 3: Esi
Enter score (0-100): 70
```

Expected summary:
```text
--- STUDENT RESULTS ---
Ama: 80.00/100
Kofi: 90.00/100
Esi: 70.00/100

Average score: 80.00
Highest score: 90.00 (Kofi)
Lowest score: 70.00 (Esi)
```

## How arrays are used
- `names[MAX]` stores student names.
- `scores[MAX]` stores student scores.
- Both arrays use the same index to associate each student's name with their score.
- Loops process the arrays to display results and calculate summary statistics.

## Testing checklist
- [ ] Valid scores (e.g. 80, 90, 70) produce an average of 80.
- [ ] Scores below 0 or above 100 are rejected.
- [ ] A student count below 1 or above 100 is rejected.
- [ ] A single-student class displays the same value as its average, highest, and lowest score.

## Limitations and possible improvements
Student data is held in memory only and is not saved after the program exits. Future versions could add file storage, student search/edit functions, letter grades, or a graphical interface.

## Author
Student project demonstrating arrays in C++.
