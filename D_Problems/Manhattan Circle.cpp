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
    int n, m , row = 0, col = 0, x = 0;
    string s;
    cin >> n >> m;

//    char mc[n][m];
    bool flag = false;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < m; ++j) {
//            cin >> mc[n][m];

            if (s[j] == '#' && col == 0 && !flag){
                flag = true;
                col = j;
                row = i;
            }
        }
        if ( s[col] == '#')
            x++;
    }

    cout << row + 1 + (x/2) << " " << col + 1;
    END
}
int32_t main() {
    yomn

    int t;
    cin >> t;

    while (t--){
        solve();
    }
}
