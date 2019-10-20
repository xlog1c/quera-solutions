#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int a,b;
    cin >> a >> b;
    string na = to_string(a);
    string nb = to_string(b);
    if(na[2] > nb[2]) cout << nb << " < " << na;
    else if(nb[2] > na[2]) cout << nb << " < " << na;
    else{
        if(na[1] > nb[1]) cout << nb << " < " << na;
        else if(nb[1] > na[1]) cout << nb << " < " << na;
        else {
            if(na[0] > nb[0]) cout << nb << " < " << na;
            else if(nb[0] > na[0]) cout << nb << " < " << na;
            else cout << na << " = " << nb;
        }
    }
    return 0;
}