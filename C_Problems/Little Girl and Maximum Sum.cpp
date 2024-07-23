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
    int n, q, l, r, ans = 0;
    cin >> n >> q;
    deque< int > nums(n);
    deque< int > fn(n, 0);

    fr (n){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < q; ++i) {
        cin >> l >> r;

//        for (int j = l-1; j < r; ++j) {
//            fn[j]++;
//        }

        fn[--l]++;
        if (r < n)
            fn[r]--;
    }

    for (int i = 1; i < n; ++i) {
        fn[i] += fn[i-1];
    }

    sort(fn.begin(), fn.end());

    for (int i = 0; i < n; ++i) {
        ans += fn[i]*nums[i];
    }
    cout << ans;
    END
}
int32_t main() {
    yomn

    int t = 1;
//   cin >> t;

    while (t--){
        solve();
    }
}