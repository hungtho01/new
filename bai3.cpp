#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long n1,n2,n3; cin >> n1 >> n2 >> n3;
        long long x;
        set<long long> a, b;
        vector<long long> res;
        for(int i = 1; i <= n1; i++) {
            cin >> x;
            a.insert(x);
        }
        for(int i = 1; i <= n2; i++) {
            cin >> x;
            if(a.find(x) != a.end()) b.insert(x);
        }
        for(int i = 1; i <= n3; i++) {
            cin >> x;
            if(b.find(x)!=b.end()) res.push_back(x);
        }
        if(res.empty()) cout << -1;
        else 
        {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
        }
        cout << endl;
    }
}
