#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print128(__int128_t n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    if (n < 0) {
        cout << '-';
        n = -n;
    }
    string s = "";
    while (n > 0) {
        s += (char)('0' + (n % 10));
        n /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

void solve()
{
    int n;
    if (!(cin >> n)) return;
    
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    __int128_t res = 0;
    for (int i = 0; i < n; i++) {
        ll coeff = (ll)i - (ll)(n - 1 - i);
        res += (__int128_t)coeff * arr[i];
    }
    
    print128(res);
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
