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

void TLE()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    
    ll count = 0;
    FORELL(i, 1, a) {
        FORELL(j, 1, b) {
            if(i * y == x * j) {
                if(i <= a && j <= b) {
                    count++;
                }
            }
        }
    }
    cout << count;
    return;
}

void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    
    ll gcd = GCD(x, y);
    x /= gcd;
    y /= gcd;
    
    ll res = min(a/x, b/y);
    cout << res;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}
