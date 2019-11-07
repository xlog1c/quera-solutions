#include<bits/stdc++.h>
using namespace std;

#define pb push_back


bool isPrime(int a){
    for(int i = 2; i*i <= a; i++)
        if(a % i == 0) return 0;
    return 1;
}

int main(){
    int a, b, res = 0;
    vector<int> v;
    cin >> a >> b;
    while(a < b-1){
        if(isPrime(++a) == 1) cout << a << ",";
    }
    cout << "\b";
}