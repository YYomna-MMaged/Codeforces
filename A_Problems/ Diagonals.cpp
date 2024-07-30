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
    int n, k, ans = 0;
    cin >> n >> k;

    if (k > 0){
        k -= n;
        ans++;
        n--;
    }

    while (k > 0){
        k -= n;
        ans++;
        if (k > 0){
            k -= n;
            ans++;
            n--;
        }
    }

    cout << ans;
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