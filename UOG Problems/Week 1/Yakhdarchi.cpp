#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a < 0) cout << "Ice";
    else if(a <= 100 || a == 0) cout << "Water";
    else cout << "Steam";
}
