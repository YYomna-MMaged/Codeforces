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
    int x, y, k;
    cin >> x >> y >> k;

    while (k > 0 && x > 1){
        int nx = (((x / y) + 1) * y) - x;;
        nx = max(1LL, nx);
        nx = min(nx, k);
        x += nx;
        k -= nx;
        while (x % y == 0){
            x /= y;
        }
    }

    if (x == 1){
        cout << x + (k % (y - 1));
    }
    else
        cout << x;
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