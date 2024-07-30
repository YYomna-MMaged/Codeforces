/*
 * yomn
 */
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

using namespace std;

#define int long long
#define END cout << '\n' ;
#define fr(n) for(int i = 0 ; i < n ; i++)
#define s_lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define s_upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define yomn ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n, mx = 0;
    cin >> n;
    map<int , int> f;

    fr(n){
        int s;
        cin >> s;

        f[s]++;

        mx = max(mx, s);
    }

    for(auto x : f){
        if (x.second % 2 == 1) {
            cout << "YES";
            END
            return;
        }
    }

    cout << "NO";
    END
}
int32_t main() {
    yomn

    int t = 1;
    cin >> t;

    while (t--){
        solve();
    }
}