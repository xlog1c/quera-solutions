#include<bits/stdc++.h>
using namespace std;

#define pb push_back

bool isPrime(int x)
{
    for(int i = 2; i * i <= x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> now , nxt;
    now = {2 , 3 , 5 , 7};

    for(int i = 2; i <= n; i++)
    {
        nxt.clear();
        for(auto x : now)
            for(int j = 0; j < 10; j++)
                if(isPrime(x * 10 + j))
                    nxt.pb(x * 10 + j);

        now = nxt;
    }

    sort(now.begin() , now.end());
    for(auto x : now)
        cout << x << endl;
    
    return 0;
}