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
 
void solve()
{
    ll n;
    cin >> n;
    if(n >= 0) {
        cout << n;
        return;
    }
    ll del_back = n / 10;
    
    string s = to_string(n);
    char back = s.back();
    if(s.length() >= 1) {
        s.erase(s.length() - 2, 1);
    }
    ll del_bef_back = stoll(s);
    
    ll res = max(del_bef_back, del_back);
    cout << res;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
