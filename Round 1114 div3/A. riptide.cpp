#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

void solve();

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
    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b || b == c || a == c) {
        cout << "0\n";
        return;
    }
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    res.push_back(c);

    sort(res.begin(), res.end());

    ll ans = 0;
    FOR(i, 0, 3) {
        ans = min(res[1] - res[0], res[2] - res[1]);
    }
    cout << ans << "\n";
}
