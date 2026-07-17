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
        int n, m ,h;
        cin >> n >> m >> h;
        vector<int> v(n);
        FOR(i, 0, n) {
            cin >> v[i];
        }
        vector<int> copy = v;
        
        FOR(i, 0, m) {
            int b, c;
            cin >> b >> c;
            b--;
            
            if(copy[b] + c <= h) {
                copy[b] += c;
            }
            else {
                copy = v;
            }
        }
        
        FOR(i, 0, n) {
            cout << copy[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
