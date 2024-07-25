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
    int n, l, r, k, ans = 0;
    deque< int > avs;
    cin >> n >> l >> r >> k;

    while (n--){
        int x;
        cin >> x;

        if (x >= l && x <= r){
            avs.push_back(x);
        }
    }

    if (!avs.empty()){
        sort(avs.begin(), avs.end());

        for (auto i : avs){
            if (i <= k){
                ans++;
                k -= i;
            }
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