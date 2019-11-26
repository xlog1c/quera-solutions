#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 3, b, i = 0, q;
    bool ch = 0, f = 1;
    do{
        if(f == 1){
            f = 0;
            cin >> b;
            q = b;
        }
        else{
            q = b;
            cin >> b;
        }
        if(a != 2){
            if(b > q){
                if(a != 0 && i != 1) ch = 1;
                a = 0;
            }
            else if(b < q){
                if(a != 1 && i != 1) ch = 1;
                a = 1;
            }
            if(ch == 1) a = 2;
        }
        i++;
    } while(i < 10);
    if(a == 0) cout << "strictly ascending";
    else if(a == 1) cout << "strictly descending";
    else cout << "neither ascending nor descending";
}