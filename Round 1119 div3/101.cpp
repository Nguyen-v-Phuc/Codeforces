/*
         _______
        /       /_
       /  -/-  / /
      /   /   / /
     /_______/ /         Matthew 19:26
    ((______| /   'With man, this is impossible,
     `'''''''`       but with God, all things are possible'
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 1e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265
const ll MOD = 1e9 + 7;
#define pb push_back
#define eb emplace_back

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    int dist = 0;
    int max_dist = -1;
    int last = -1;

    bool no_one = true;
    FOR(i, 0, n) {
        if(v[i] == 1) {
            no_one = false;
            break;
        }
    }

    if(no_one) {
        if(v.front() == -1 && v.back() == -1) {
            v.front() = 1;
            v.back() = 1;

            FOR(i, 1, n-1) {
                v[i] = 0;
            }
        }
 
    }

    FOR(i, 0, n) {
        if(v[i] == 1) {
            if(last != -1) {
                dist = i - last + 1;
                max_dist = max(max_dist, dist);

                FOR(j, last + 1, i) {
                    v[j] = 0;
                }
            }
        last = i;
        }
    }

    int l = 0;
    int r = n-1;
    while(l < n && v[l] == 0) l++;
    while(r >= 0 && v[r] == 0) r--;
    if(l < r && abs(r - l + 1) > max_dist) {
        v[l] = 1;
        v[r] = 1;
        
        FOR(i, l+1, r) {
            if(v[i] == -1) v[i] = 0;
        }
    }
    
    // clean up all the leftover -1s
    FOR(i, 0, n) {
        if(v[i] == -1) v[i] = 1;
    }

    FOR(i, 0, n) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}
