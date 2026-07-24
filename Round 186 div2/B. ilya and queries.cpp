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
 
// count how many char matches in the range of the queries

void idk()
{
    string s;
    cin >> s;
    int n = s.length();
    
    vector<int> dp(n+1);
    dp[0] = 0;
    
    FOR(i, 1, n) {
        if(s[i-1] == s[i]) {
            dp[i] = dp[i-1] + 1;
        }
        else {
            dp[i] = dp[i-1];
        }
    }
    
    int m;
    cin >> m;
    while(m--) {
        int l, r;
        cin >> l >> r;
        
        cout << dp[r-1] - dp[l-1] << "\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    idk();
    return 0;
}
