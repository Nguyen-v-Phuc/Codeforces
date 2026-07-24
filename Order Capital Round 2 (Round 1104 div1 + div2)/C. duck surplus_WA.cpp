#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define vec vector

void solve()
{
    int n;
    cin >> n;
    vec<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    bool sorted = is_sorted(v.begin(), v.end());
    ll res = 0;
    ll curr = 0;
    
    if(!sorted) {
        FOR(i, 0, n-1) {
            if(v[i] > v[i+1]) {
                curr = v[i];
                for(int j = i + 1; j < n && curr > v[j]; j++) {
                    curr += v[j];
                }
            }
            res = max(res, (ll)curr);
        }
        cout << res << "\n";
    }
    else {
        cout << v.back() << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    
    while(tc--) {
        solve();
    }

    return 0;
}
