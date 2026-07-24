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
 
void tungtungtung()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    if(v.size() == 1) cout << "0";
    
    else if(v.size() == 2) {
        if(abs(v[0] - v[1]) % 2 == 0) {
            cout << abs(v[0] - v[1])/2;
        }
        else {
            cout << abs(v[0] - v[1]);
        }
    }
    
    else if(v.size() == 3) {
        if(abs(v[0] - v[1]) == abs(v[1] - v[2])) {
            cout << abs(v[0] - v[1]);
        }
        else {
            cout << "-1";
        }
    }
    
    else {
        cout << "-1";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	tungtungtung();
}
