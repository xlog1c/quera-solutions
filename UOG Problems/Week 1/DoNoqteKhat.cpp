#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    if(a[0] == a[2] && a[1] == a[3]) cout << "Try again";
    else if(a[0] == a[2]) cout << "Vertical";
    else if(a[1] == a[3]) cout << "Horizontal";
    else cout << "Try again";
}
