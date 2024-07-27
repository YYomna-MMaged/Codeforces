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
    string a, b;
    cin >> a >> b;

    int ans = INT_MAX;

    for (int i = 0; i < b.size(); ++i) {
        int x = i;
        for( auto c : a){
            if (x < b.length() && c == b[x])
                x++;
        }
        ans = min(ans, i-x + (int)a.size() + (int)b.size());
    }

    cout << ans;

}
int32_t main() {
    yomn

    int t = 1;
    cin >> t;

    while (t--){
        solve();
    }
}