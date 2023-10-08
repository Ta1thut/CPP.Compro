#include <iostream>
#include <string>
#include<iomanip>f



using namespace std;
const int NUM_STUDENTS = 3;
const int NUM_SUBJECTS = 3;

void inputStudentData(string names[], double scores[][NUM_SUBJECTS]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i+1 << endl;
        cout << "Name[" << i + 1 << "] : ";
        cin >> names[i];

        for (int j = 0; j < NUM_SUBJECTS; j++) {
            cout << "Score[" << i << "][" << j+1 << "] : ";
            cin >> scores[i][j];
        }
    }
}

char calculateGrade(double score) {
    if (score >= 85 && score < 100) {
        return 'A+';
    }
    else if (score >= 80 && score < 85) {
        return 'A';
    }
    else if (score >= 75 && score < 80) {
        return 'B+';
    }
    else if (score >= 70 && score < 75) {
        return 'B';
    }
    else if (score >= 65 && score < 70) {
        return 'C+';
    }
    else if (score >= 60 && score < 65) {
        return 'C';
    }
    else if (score >= 55 && score < 60) {
        return 'D+';
    }
    else if (score >= 50 && score < 55) {
        return 'D';
    }
    else if (score <= 49) {
        return 'F';
    }
    else {
        return 'N/A';
    }
}


double calculateGPA(double scores[][NUM_SUBJECTS]) {
    double totalGPA = 0.0;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        double studentGPA = 0.0;

        for (int j = 0; j < NUM_SUBJECTS; j++) {
            studentGPA += (scores[i][j] / 20.0);
        }

        studentGPA /= NUM_SUBJECTS;
        totalGPA += studentGPA;
    }

    return totalGPA / NUM_STUDENTS;
}

int main() {
    string studentNames[NUM_STUDENTS];
    double studentScores[NUM_STUDENTS][NUM_SUBJECTS];

    inputStudentData(studentNames, studentScores);

    cout << "-----------------------------------------------" << endl;
    cout << "Students   Math    Science     English     GPA" << endl;
    cout << "-----------------------------------------------" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << i+1 << " " << studentNames[i] << " ";
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            cout << setw(7) << studentScores[i][j] << "(" << calculateGrade(studentScores[i][j]) << ")" << "   ";
        }
        cout << calculateGPA(studentScores) << endl;
    }
    cout << "--------------------------------------" << endl;
    return 0;
}