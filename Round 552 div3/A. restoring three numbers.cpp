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
    vector<int> v(4);
    FOR(i, 0, 4) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    do {
        int a = v[0] + v[2] - v[3];
        int b = v[0] - a;
        int c = v[1] - b;
        
        if(a+b+c == v[3] && a+b == v[0] && b+c == v[1] && a+c == v[2]) {
            cout << a << " " << b << " " << c << " ";
            break;
        }
    }
    while(next_permutation(v.begin(), v.end()));
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	tungtungtung();
}
