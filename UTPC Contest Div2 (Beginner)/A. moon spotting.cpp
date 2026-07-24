#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    if (s == "0") {
        cout << "New moon";
        return 0;
    }

    if (s == "100") {
        cout << "Full moon";
        return 0;
    }
    
    char side = s.back();
    int phase = stoi(s.substr(0, s.length() - 1)); // turn string to int
    
    if(side == 'R') {
        if(phase < 50) {
            cout << "Waxing crescent";
        }
        else if(phase == 50) {
            cout << "First quarter";
        }
        else {
            cout << "Waxing gibbous";
        }
    }
    
    else if(side == 'L') {
        if(phase < 50) {
            cout << "Waning crescent";
        }
        else if(phase == 50) {
            cout << "Third quarter";
        }
        else {
            cout << "Waning gibbous";
        }
    }
    
    return 0;
}
