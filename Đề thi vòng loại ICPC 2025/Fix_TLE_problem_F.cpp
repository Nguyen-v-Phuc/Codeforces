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

int MAX = 1000000;
int pref[1000005];

bool nearly(int n)
{
    string s = to_string(n);
    int l = 0;
    int r = s.size() - 1;
    int count = 0;
    
    while(l < r) {
        if(s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            count++;
            l++;
            r--;
        }
    }
    if(count > 1) {
        return false;
    }
    return true;
}

void prepare()
{
    FORE(i, 1, MAX) {
        if(nearly(i)) {
            pref[i] = pref[i-1] + 1;
        }
        else {
            pref[i] = pref[i-1];
        }
    }
}

void ICPC()
{
    int n;
    cin >> n;
    while(n--) {
        int b, a;
        cin >> a >> b;
        
        cout << pref[b] - pref[a-1] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    prepare();
    ICPC();
    return 0;
}
