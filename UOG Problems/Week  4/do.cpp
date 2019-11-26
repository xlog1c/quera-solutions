#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100], temp;
    bool c = 0;
    
    for(int i = 0; i < 100; i++)
        cin >> a[i];
    
    for(int i = 0; i < 99; i += 2){
        temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
    }
    for(int i = 0; i < 100; i++)
        cout << a[i] << " ";
}