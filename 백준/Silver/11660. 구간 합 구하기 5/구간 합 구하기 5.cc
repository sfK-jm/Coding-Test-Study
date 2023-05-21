#include <iostream> 
using namespace std;

int map[1206][1206] = {0}; // i,j까지 합
int n, m, temp;
int x1, y1, x2, y2, ret;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(NULL);
    
    cin >> n >>  m;
    for (int i = 1; i <= n; i++){
        int sum = 0;
        for (int j = 1; j <= n;j++){
            cin >> temp;
            map[i][j] = map[i - 1][j] + map[i][j - 1] + temp - map[i - 1][j - 1]; 
        }
    }

    for (int i = 0; i < m;i++){
        ret = 0;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        ret = map[x2][y2] - map[x1 - 1][y2] - map[x2][y1 - 1] + map[x1 - 1][y1 - 1]; 
        cout << ret << '\n';
    }
    return 0;
}
