#include<bits/stdc++.h>
using namespace std;

// this one's idea came to my mind at 2 am so u know ... :|
// just go see HappyArray-2

int b[20][2];
int main(){
    int a[20], j = 0;
    bool c = 0, yes = 0;
    for(int i = 0; i < 20; i++){
        cin >> a[i];
        if(a[i] != 0){
            j = 0;
            c = 0;
            for(; j < 20; j++){
                if(b[j][0] == 0){
                    break;
                }
                if(b[j][0] == a[i]){
                    b[j][1] += 1;
                    c = 1;
                    break;
                }
            }
            if(c == 0){
                b[j][0] = a[i];
                b[j][1] = 1;
            }
        }
    }
    // dont do it :| check line 4
    for(int i = 0; i < 20; i++){
        if(a[i] == 0){
            yes = 0;
            break;
        }
        if(b[i][0] == 0) break;
        if(b[i][0] == b[i][1]){
            yes = 1;  
        }
        else{
            yes = 0;
            break;
        }
    }
    if(yes == 1) cout << "YES";
    else cout << "NO";

}
