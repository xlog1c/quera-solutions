#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int a, s = 1;
    cin >> a;
    if(a == 1 || a == 2) cout << a;
    else if(a == 0) cout << "NOTHING";
    else{
        for(int i = 2; i < a; i++){
            if(a % i == 0){
                s *= i;
                if(s == a){
                    cout << i;
                    break;
                }
            }
            else{
                cout << "NOTHING";
                break;
            }
        }
    }
}