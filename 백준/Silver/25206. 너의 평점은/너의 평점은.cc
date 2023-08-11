#include <iostream>
using namespace std;

string majorName;
double avgScore, sumGrade;
double score[25], grade[25];
string temp;

void addScore(double s, string t, double g) {
    if (t == "A+")
        s = 4.5;
    else if (t == "A0")
        s = 4.0;
    else if (t == "B+")
        s = 3.5;
    else if (t == "B0")
        s = 3.0;
    else if (t == "C+")
        s = 2.5;
    else if (t == "C0")
        s = 2.0;
    else if (t == "D+")
        s = 1.5;
    else if (t == "D0")
        s = 1.0;
    else if (t == "F")
        s = 0.0;
    else if (t == "P") {
        s = 0.0;
        g = 0;
    }
    avgScore += (s * g);
    sumGrade += g;
}

int main() {
    for (int i = 0; i < 20; i++) {
        cin >> majorName >> grade[i] >> temp;
        addScore(score[i], temp, grade[i]);
    }
    avgScore = avgScore / sumGrade;
    printf("%.9lf", avgScore);
}