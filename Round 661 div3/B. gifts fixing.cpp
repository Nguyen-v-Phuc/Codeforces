#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265
#define ALL v.begin(), v.end()
 
inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};
 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    FORLL(i, 0, n) {
        cin >> a[i];
    }
    FORLL(i, 0, n) {
        cin >> b[i];
    }
    
    int min_a = *min_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
 
    ll res = 0;
    
    FORLL(i, 0, n) {
        ll A = a[i] - min_a; 
        ll B = b[i] - min_b;
        res += max(A, B);
    }
    cout << res << "\n";
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
