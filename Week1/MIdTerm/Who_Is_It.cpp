#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    char name[100];
    char section[100];
    int totalMarks;
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            std::cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }
        Student bestStudent = students[0];
        for (int i = 1; i < 3; ++i) {
            if (students[i].totalMarks > bestStudent.totalMarks) {
                bestStudent = students[i];
            } else if (students[i].totalMarks == bestStudent.totalMarks) {
                if (students[i].id < bestStudent.id) {
                    bestStudent = students[i];
                }
            }
        }
        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.totalMarks << endl;
    }
    
    return 0;
}
