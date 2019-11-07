#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, s = 0;
    cin >> a;
    for(int i = 1; i*i < a; i++){    
        if(a % i == 0){
            s += i;
            s += a/i;
        }
    }
    if(s - a == a) cout << "YES";
    else cout << "NO";
} 
