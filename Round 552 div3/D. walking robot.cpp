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
    int n, b, a;
    cin >> n >> b >> a;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    
    int cur_b = b;
    int cur_a = a;
    int step = 0;
    
    FOR(i, 0, n) {
        if(cur_a == 0 && cur_b == 0) {
            break;
        }
        if(v[i] == 0) {
            if(cur_a > 0) {
                cur_a--;
                step++;
            }
            else if(cur_a == 0 && cur_b > 0) {
                cur_b--;
                step++;
            }
        }
        if(v[i] == 1) {
            if(cur_b > 0 && cur_a < a) {
                cur_b--;
                cur_a++;
                step++;
            }
            else if((cur_b == 0 && cur_a > 0) || cur_a == a) {
                cur_a--;
                step++;
            }
        }
    }
    cout << step;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	tungtungtung();
	return 0;
}
