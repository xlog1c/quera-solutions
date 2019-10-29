#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, c, d, t = 0;
    cin >> a >> b >> c >> d;
    if(a == b || a == c || a == d) t++;
    if(b == c || b == d) t++;
    if(c == d) t++;
    cout << t;

}