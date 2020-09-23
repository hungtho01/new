#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long n1,n2,n3; cin >> n1 >> n2 >> n3;
        long long x;
        vector<long long> a, b;
        vector<long long> res;
        for(int i = 1; i <= n1; i++) {
            cin >> x;
            a.push_back(x);
        }
        vector<long long>::iterator it;
        for(int i = 1; i <= n2; i++) {
            cin >> x;
            it = find(a.begin(), a.end(), x);
            if(it != a.end()) b.push_back(x), a.erase(it);
        }
        for(int i = 1; i <= n3; i++) {
            cin >> x;
            it = find(b.begin(), b.end(), x);
            if(it!=b.end()) {
                res.push_back(x);
                b.erase(it);
            }
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
