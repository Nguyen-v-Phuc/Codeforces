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

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    if(m % n != 0) {
        cout << "-1";
        return;
    }
    
    ll count = 0;
    int k = m / n;
    
    while(k % 2 == 0) {
        k /= 2;
        count++;
    }
    while(k % 3 == 0) {
        k /= 3;
        count++;
    }
    
    if(k == 1) {
        cout << count;
    }
    else {
        cout << "-1";
    }
}
