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
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    
    ll max_len = 1;
    ll current_len = 1;
    
    FOR(i, 0, n-1) {
        if(abs(v[i] - v[i+1]) > k) {
            current_len = 1;
            continue;
        }
        else {
            current_len++;
        }
        max_len = max(max_len, current_len);
    }
    cout << max_len;
    
    return 0;
}
