#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, t = 0;
    bool c = 0;
    cin >> a;
    for(int i = 2; i <= a; i++){
        if(a % i == 0){
            t = 0;
            while(a % i == 0){
                t++;
                a /= i;
            }
            if(t != 0){
                if(c == 0){
                    if(t == 1) cout << i;
                    else cout << i << "^" << t;
                    c = 1;
                }
                else{
                    if(t == 1) cout << "*" << i;
                    else cout << "*" << i << "^" << t;
                }
            }
        }
    }
}
