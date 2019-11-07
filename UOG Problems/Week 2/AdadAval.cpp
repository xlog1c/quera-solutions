#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for(int i = 2; i * i <= x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}
int main(){
    int a, s = 0, r, i = 0, b;
    cin >> a;
    b = a;
    while(a > 0)
    {
        r = a % 10;
        s += r;
        a /= 10;
    }
    while(i < s){
        b++;
        if(isPrime(b) == 1) i++;
    }
    cout << b;
}
