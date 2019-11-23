#include<bits/stdc++.h>
using namespace std;
 
// cmath ? come on :))))

int main(){
    float a[15], m = 0, j = 1;
    for(int i = 0; i < 15; i++){
        cin >> a[i];
        m += a[i];
    }
    m /= 15;
    for(int i = 0; i < 15; i++){
        if(a[i] < m){
            j = 1;
            for(; j*j < m*a[i]; j++) // find radical adad
                continue;
            if(i != 14) cout << j << " "; // check if the number is last ya chi
            else cout << j;        
        }
        else{
            if(i != 14) cout << a[i] << " "; // same as bala
            else cout << a[i];    
        }
    }
}
