#include<bits/stdc++.h>
using namespace std;

#define pb push_back


bool Solve(string a, string b){
    int j = 0;
    for(int i = 0; i <= b.length(); i++){
        for(j; j < a.length();){
            if(b[i] != a[j]){
                a.erase(begin(a)+j);
            }
            else break;           
        }
        j++;
    }
    if(a != b) return 0;
    else return 1;
}
bool SolveR(string a, string b){
    reverse(begin(a), end(a));
    if(Solve(a, b) == 1) return 1;
    else return 0;
}

int main(){
    int n;
    vector<string> v;
    string a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if( SolveR(a, b) == 1 || Solve(a, b) == 1) v.pb("YES");
        else v.pb("NO");
    }
    for(auto i:v) cout << i << endl;

}