#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i = 0, s = 1;
    cin >> a >> b;
    while(1){
        s += b;
        if(s > a) s -= a;
        if(s == 1)
            break;
        i++;
    }
    cout << i+1;
}