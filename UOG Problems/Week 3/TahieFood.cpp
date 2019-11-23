#include<bits/stdc++.h>
using namespace std;


int main(){
    // it was bad idea :| just define vars with meaningless characters
    int a, Benzin[10], Masraf[10], bAll = 0;
    cin >> a;
    for(int i = 0; i < 10; i++)
        cin >> Benzin[i] >> Masraf[i];

    for(int i = a; i < 10; i++){
        bAll += Benzin[i] - Masraf[i];
        if(bAll < 0){
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < a; i++){
        bAll += Benzin[i] - Masraf[i];
        if(bAll < 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
