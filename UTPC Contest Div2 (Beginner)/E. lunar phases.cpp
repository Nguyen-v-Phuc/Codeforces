#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    
    while(q--) {
        int sx, sy, mx, my;
        cin >> sx >> sy >> mx >> my;
        
        ld sun_angle = atan2(sy, sx);
        ld moon_angle = atan2(my, mx);
        
        if (moon_angle < 0) moon_angle += 2 * PI;
        if (sun_angle < 0) sun_angle += 2 * PI;
        
        ld angle = moon_angle - sun_angle;
        if(angle < 0) angle += 2 * PI;
        
        if(angle > 0 && angle < PI/2) {
            cout << "Third quarter\n";
        }
        else if(angle > PI/2 && angle < PI) {
            cout << "New moon\n";
        }
        else if(angle > PI && angle < 3*PI / 2) {
            cout << "First quarter\n";
        }
        else {
            cout << "Full moon\n";
        }
    }
    
    return 0;
}
