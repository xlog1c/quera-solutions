#include<bits/stdc++.h>
using namespace std;

int a(int b){
    if(b == 0) return 1;
    else if(b == 1) return 2;
    else if(b == 2) return 3;
    else{
        return a(b-1)+3*a(b-2)*a(b-3);
    }


}

int main(){
    int n;
    cin >> n;
    cout << a(n);
}