#include <iostream>
using namespace std;

int n, cnt, money;
int coins[6] = {500, 100, 50, 10, 5, 1};

int main() {
    cin >> n;
    money = 1000 - n;
    for (int coin : coins) {
        while (1) {
            if (money >= coin) {
                money -= coin;
                cnt++;
            } else
                break;
        }
    }
    cout << cnt << "\n";
}