#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0, right = (int)s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++; right--;
    }
    return true;
}

// 문자열 n(10진수)을 m진수 문자열로 변환
string convert(const string& n, int m) {
    string number = n;
    string result;

    while (number != "0") {
        int remainder = 0;
        string nextNumber;
        bool leadingZero = true;

        // 문자열 나누기: number를 m으로 나눔
        for (char digitChar : number) {
            int digit = digitChar - '0';
            int value = remainder * 10 + digit;
            int quotient = value / m;
            remainder = value % m;

            // 몫의 선행 0을 제거
            if (quotient != 0 || !leadingZero) {
                nextNumber.push_back(quotient + '0');
                leadingZero = false;
            }
        }
        if (nextNumber.empty()) nextNumber = "0";

        result.push_back(remainder + '0');  // 나머지 저장
        number = nextNumber;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string n;
    cin >> n;

    bool flag = false;
    for (int i = 2; i <= 10; i++) {
        string converted = convert(n, i);
        if (isPalindrome(converted)) {
            flag = true;
            cout << i << " " << converted << "\n";
        }
    }
    if (!flag) cout << "NIE\n";

    return 0;
}