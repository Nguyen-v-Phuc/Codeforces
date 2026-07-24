#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define FORED(i, a, b) for(int i = a; i >= b; i--)
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        FORLL(i, 0, n) {
            cin >> v[i];
        }
        
        ll sum = 0;
        ll need = 0;
        int poss = 1;
        
        FORLL(i, 0, n) {
            sum += v[i];
            ll idk = i+1;
            need = idk*(idk+1)/2;
            
            if(sum < need) {
                poss = 0;
                break;
            }
        }
        
        if(poss) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
 
    return 0;
}
