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
    int n;
    cin >> n;
    vector< int > as(n);
    vector< int > bs(n);

    fr(n){ cin >> as[i]; }
    fr(n){ cin >> bs[i]; }

    int a_ind = 0, b_ind = 0, ans = 0;

    while (b_ind < n){
        if (as[a_ind] > bs[b_ind])
            ans++;
        else
            a_ind++;
        b_ind++;
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