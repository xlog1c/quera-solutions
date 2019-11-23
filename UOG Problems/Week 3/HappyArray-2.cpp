#include<bits/stdc++.h>
using namespace std;

int b[20];
int main(){
    int a[20];
    bool yes = 1;
    for(int i = 0; i < 20; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    for(int i = 0; i < 20; i++)
        if(b[i] != 0 && b[i] != i){
            yes = 0;
            break;
        }

    if(yes == 0) cout << "NO";
    else cout << "YES";
}
