#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[100], k, sum = 0;
    cin >> k;
    for(int i = 0; i < k; i++)
        cin >> a[i];

    for(int j = 0; j < k/2; j++)
        sum += a[j] * a[k-j-1];
    
    cout << sum;
}
