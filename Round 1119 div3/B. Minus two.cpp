/*
         .-.
       __| |__
      [__   __]
         | |
         | |           Matthew 19:26
         | |  'With man, this is impossible,
         '-'     but with God, all things are possible'
*/
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
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];

    int max_freq = 0;
    int max1 = 0;
    int max2 = 0;
    int cnt_odd = 0;
    int cnt_even_a = 0;
    int cnt_even_b = 0;
    map<int, int> mp;
    map<int, int> mp2;

    for(int i : v) {
        if(i % 2 != 0) cnt_odd++;
    }
    for(int i : v) {
        if(i % 2 == 0) {
            if((i / 2) % 2 == 0) cnt_even_a++;
            else if((i / 2) % 2 == 1) cnt_even_b++;
        }
    }
    int max_even = max(cnt_even_a, cnt_even_b);

    for(int i : v) {
        mp[i]++;
    }

    FOR(i, 0, n) {
        v[i] = abs(v[i] - 2);
        mp2[v[i]]++;
    }
    for(auto &x : mp) {
        max1 = max(max1, x.second);
    }
    for(auto &y : mp2) {
        max2 = max(max2, y.second);
    }

    max_freq = max(max(max1, max2), max(cnt_odd, max_even));
    cout << max_freq << "\n";
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
