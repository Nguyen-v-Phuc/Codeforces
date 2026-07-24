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

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    FOR(i, 0, n) {
        cin >> x[i];
    }
    FOR(i, 0, n) {
        cin >> y[i];
    }
    
    ll max_dist = 0;
    
    FOR(i, 0, n) {
        FOR(j, i+1, n) {
            ll dx = abs(x[i] - x[j]);
            ll dy = abs(y[i] - y[j]);
            max_dist = max(max_dist, dx*dx + dy*dy);
        }
    }
    
    cout << max_dist;

    return 0;
}
