#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int a, b;
    cin >> a >> b;

    if(a%10 > b%10) cout << b << " < " << a;
    else if(a%10 < b%10) cout << a << " < " << b;
    else{
        if((a/10)%10 > (b/10)%10) cout << b << " < " << a;
        else if((b/10)%10 > (a/10)%10) cout << a << " < " << b;
        else {
            if(a/100 > b/100) cout << b << " < " << a;
            else if(b/100 > a/100) cout << a << " < " << b;
            else cout << a << " = " << b;
        }
    }
}