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

ll uoc(ll n)
{
    ll count = 0;
    FORELL(i, 1, sqrt(n)) {
        if(n % i == 0) {
            count++;
            if(i != n/i) {
                count++;
            }
        }
    }
    return count;
}

void TLEd()
{
    ll n;
    cin >> n;
    
    FORELL(i, 1, sqrt(n)) {
        ll mu = uoc(i);
        if((ll)pow(i, mu) == n) {
            cout << i;
            return;
        }
    }
    cout << "-1";
    return;
}

void ICPC()
{
    ll n;
    cin >> n;
    
    FORELL(i, 1, 1000000) {
        ll mu = uoc(i);
        
        ll val = 1;
        bool overflow = false;
        
        FOR(j, 0, mu) {
            if(n / i < val) {
                overflow = true;
                break;
            }
            val *= i;
        }
        if(!overflow && val == n) {
            cout << i;
            return;
        }
    }
    
    ll r = round(sqrt(n));
    if(r * r == n && uoc(r) == 2) {
        cout << r;
        return;
    }
    cout << "-1";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ICPC();
    return 0;
}
