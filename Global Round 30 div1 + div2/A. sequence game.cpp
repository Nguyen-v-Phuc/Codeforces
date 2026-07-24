#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
 
void solve();
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
 
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    //sort(v.begin(), v.end());
    
    int maxValue = *max_element(v.begin(), v.end());
    int minValue = *min_element(v.begin(), v.end());
    
    if(k <= maxValue && k >= minValue) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
