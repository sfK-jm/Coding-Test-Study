#include <iostream>

#include <string>

using namespace std;

 

int main(void){
    
        ios_base::sync_with_stdio(0);

        cin.tie(0);

        string N;

        int M;

        cin >> N >> M;

 

        int len = N.length();

        int num = stoi(N);

        string result;

        if (len * num >= M){

                 int cnt = 0;

                 while (1){

                         if (cnt + len > M)

                                 break;

 

                         result += N;

                         cnt += len;

                 }

                 for (int i = 0; i < M - cnt; i++)

                         result += N[i];

        }

        else{

                 for (int i = 0; i < num; i++)

                         result += N;

        }

        cout << result << "\n";

        return 0;

}