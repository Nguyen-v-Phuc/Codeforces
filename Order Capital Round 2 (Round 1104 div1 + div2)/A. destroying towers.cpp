#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    
    FOR(i, 0, n-1) {
        FOR(j, i+1, n) {
            if(v[i] < v[j]) {
                v[j] = v[i];
            }
        }
    }
    int cnt = 0;
    FOR(i, 0, n) {
        cnt += v[i];
    }
    cout << cnt << "\n";
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
