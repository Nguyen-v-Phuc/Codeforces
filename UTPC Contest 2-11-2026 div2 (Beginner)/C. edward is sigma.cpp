#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
 
#define hash_map unordered_map
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    
    hash_map<ll, int> map;
    
    map[0] = -1;
    ll prefix = 0;
    int ans = 0;
    
    FOR(i, 0, n) {
        prefix += v[i] - k;
        
        if(map.count(prefix)) {
            int length = i - map[prefix];
            ans = max(ans, length);
        }
        else {
            map[prefix] = i;
        }
    }
    
    cout << ans;
 
    return 0;
}
