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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int curr_len = 1;
    int res = 0;
    
    // formula: length * (length - 1) / 2
    
    FOR(i, 1, n) {
        if(s[i] == s[i-1]) {
            curr_len++;
        }
        else {
            res += curr_len * (curr_len - 1) / 2;
            curr_len = 1;
        }
    }
    res += curr_len * (curr_len - 1) / 2;
    
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
