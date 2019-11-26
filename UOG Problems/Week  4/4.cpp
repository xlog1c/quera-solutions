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
int log(int a){
    if(a == 1) return 0;
    for(int i = 0; i < 1000; i++){
        if(pow(2, i) > a) return i-1;
        else if(pow(2, i) == a) return i;
    }
    return -1;
}


int main(){
    int a, sum = 0;
    cin >> a;
    for(int i = 1; i*i <= a; i++){
        if(a % i == 0){
            sum += log(i);
            if(i*i != a) sum += log(a/i);
        }
    }
    cout << sum;
}