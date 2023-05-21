#include <bits/stdc++.h>
using namespace std;

int computerNum; // 컴퓨터의 수
int conetedComputerNum; // 연결된 컴퓨터의 수
int ret;

vector<int> computer[104];
int visited [104];
int c1, c2;

void dfs(int x){
    visited[x] = 1;
    for (int i = 0; i < computer[x].size(); i++){
        int nextComputer = computer[x][i]; 
        if (!visited[nextComputer]) {
            dfs(nextComputer);
            ret++;
        }
    }
}


int main(){
    cin >> computerNum;
    cin >> conetedComputerNum;
    for (int i = 0; i < conetedComputerNum; i++){
        cin >> c1 >> c2;
        computer[c1].push_back(c2);
        computer[c2].push_back(c1);
    }
    dfs(1);
    cout << ret << endl;
}
