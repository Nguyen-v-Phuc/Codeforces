#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    bool possible = true;

    for(int i = 1; i < n; i++) {
        if(v[i] - v[i-1] > 1) {
            possible = false;
            break;
        }
    }
    
    if(possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
