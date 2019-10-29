#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, r, res = 0;
    cin >> a;
    // I know it can be done without loops :/
    while(a > 0)
    {
        r = a % 10;
        res = res*10 + r;
        a /= 10;
    }
    cout << res;
}
