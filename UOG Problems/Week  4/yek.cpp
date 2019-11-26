#include<bits/stdc++.h>
using namespace std;

int pow(int a, int b){
    int p = 1;
    while (b > 0){
        p *= a;
        b--;
    }
    return p;
}

int main(){
    int a, r, res = 0, i = 0;
    bool neg = 0;
    cin >> a;
    while(a > 0)
    {
        r = a % 10;
        if(neg == 0){
            res += pow(r, i++);
            neg = 1;
        }
        else{
            res -= pow(r, i++);
            neg = 0;
        }
        a /= 10;
    }
    cout << res;
}
