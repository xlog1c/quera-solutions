#include<bits/stdc++.h>
using namespace std;

int getMax(int a, int b, int c){
    if(a >= b){
        if(a >= c) return a;
        else return c;
    }
    else{
        if(b >= c) return b;
        else return c;
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int m = getMax(a, b, c);
    if(m == a)
        if(a*a == b*b + c*c) cout << "YES";
        else cout << "NO";
    if(m == b)
        if(b*b == a*a + c*c) cout << "YES";
        else cout << "NO";
    if(m == c)
        if(a*a + b*b == c*c) cout << "YES";
        else cout << "NO";


}
