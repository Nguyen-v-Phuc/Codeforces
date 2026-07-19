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
    
    if(n <= 2) {
        FOR(i, 0, n) {
            if((v[1] % v[0]) % 2 == 0) {
                cout << v[0] << " " << v[1] << "\n";
                return;
            }
        }
        cout << "-1\n";
    }
    
    else {
    
        vector<int> even;
        vector<int> odd;
    
        FOR(i, 0, n) {
            if(v[i] % 2 == 0) {
                even.push_back(v[i]);
            }
            else {
                odd.push_back(v[i]);
            }
        }
    
        if(even.size() > 1) {
            cout << even[0] << " " << even[1] << "\n";
            return;
        }
    
        else if(odd.size() > 1) {
            FOR(i, 0, odd.size()-1) {
                FOR(j, i+1, odd.size()) {
                    if((odd[j] % odd[i]) % 2 == 0) {
                        cout << odd[i] << " " << odd[j] << "\n";
                        return;
                    }
                }
            }
        }

        cout << "-1\n";
    }

}
