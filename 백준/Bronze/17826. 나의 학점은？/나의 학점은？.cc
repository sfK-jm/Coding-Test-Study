#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int temp, score, ranking = 1;

string calculateGrade(int ranking) {
    switch (ranking) {
        case 1 ... 5:
            return "A+";
        case 6 ... 15:
            return "A0";
        case 16 ... 30:
            return "B+";
        case 31 ... 35:
            return "B0";
        case 36 ... 45:
            return "C+";
        case 46 ... 48:
            return "C0";
        case 49 ... 50:
            return "F";
    }
}

int main() {
    for (int i = 0; i < 50; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> score;

    for (int i = 0; i < 50; i++) {
        if (v[i] == score) break;
        ranking++;
    }

    cout << calculateGrade(ranking);
}