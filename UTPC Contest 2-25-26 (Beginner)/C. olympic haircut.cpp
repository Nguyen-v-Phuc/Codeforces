#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int res = 0;
    FOR(i, 0, n) {
        FOR(j, i+1, n) {
            if(v[i] + v[j] < k) {
                res = max(res, v[i] + v[j]);
            }
        }
    }
    cout << k-res << " ";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}
