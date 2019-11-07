#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, r, res = 0, b;
    cin >> a;
    b = a;
    while(a > 0)
    {
        r = a % 10;
        res = res*10 + r;
        a /= 10;
    }
    if(b == res) cout << "YES";
    else cout << "NO";
}