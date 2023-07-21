#include <bits/stdc++.h>
using namespace std;

int countingOne(string);
string transformBinary(int);

vector<int> solution(string s) {
    vector<int> answer(2);

    while (s != "1") {
        int count1 = countingOne(s);
        answer[0]++;
        answer[1] += s.size() - count1;
        s = transformBinary(count1);
    }

    return answer;
}

int countingOne(string s) {
    int count1 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            count1++;
    }
    return count1;
}

string transformBinary(int decimal) {
    string binary;

    while (decimal != 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}