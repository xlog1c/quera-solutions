#include<bits/stdc++.h>
using namespace std;

// Bedune array 2d :/

int main(){
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            if(i <= k/2){
                if(i == 1 || i == k || j == 1 || j == i || j == k || j >= k - i + 1) cout << "#";
                else cout << " ";
            }
            else{
                if(i == 1 || i == k || j == 1 || j == i || j == k || j >= i || j == k - i + 1) cout << "#";
                else cout << " ";
            }
        }
        cout << endl;
    }
}


