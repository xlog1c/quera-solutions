#include<bits/stdc++.h>
using namespace std;

int a[20][20];

int main(){
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(i == 0 || i == k-1 || j == 0 || j == k-1) a[i][j] = 1; // doresh
            if (i == j || i + j == k-1) a[i][j] = 1; // zarbdaresh
            if(j >= k/2 && a[i][j] == 1){ // 1/4 rastesh
                for(int x = j; x < k; x++){
                    a[i][x] = 1;
                }
            }
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(a[i][j] == 1) cout << "#";
            else cout << " ";

        }
        cout << endl;
    }
}
