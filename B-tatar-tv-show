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
    
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        bool only = !s.empty() && (s.find_first_not_of('0') == string::npos);
        
        if(only) {
            cout << "YES\n";
            continue;
        }
        
        if(n - k < 1) {
            cout << "NO\n";
            continue;
        }
        
        FOR(i, 0, n-k) {
            if(s[i] == '1') {
                s[i] = '0';
                if(s[i+k] == '1') {
                    s[i+k] = '0';
                }
                else {
                    s[i+k] = '1';
                }
            }
        }
        
        if(s.find('1') != string::npos) {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
 
    return 0;
}
