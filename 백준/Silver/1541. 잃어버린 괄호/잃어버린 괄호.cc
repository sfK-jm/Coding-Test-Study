#include <iostream>
#include <string>
using namespace std;

int ret;
string str, num;
bool flag = false;

int main() {
    cin >> str;

    for (int i = 0; i <= str.size(); i++) {
        // 연산기호를 만났거나 식이 끝났을때
        if (str[i] == '-' || str[i] == '+' || i == str.size()) {
            // '-'을 만났었던 경우
            if (flag) {
                ret -= stoi(num);
                num = "";
            }
            // '-'을 만난적이 없을때
            else if (!flag) {
                // 숫자를 더함
                ret += stoi(num);
                num = "";
            }
        }
        // 숫자인 경우 
        else {
            num += str[i];
        }
        // '-'가 나왔을때
        if (str[i] == '-')
            flag = true;
    }
    cout << ret << "\n";
}