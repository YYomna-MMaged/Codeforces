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
    int a[n], b[n];
    deque< int > fa(n*2+1) , fb(n*2+1);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int f = 0; // freq. for each num.
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i-1]){
            fa[a[i-1]] = max(fa[a[i-1]], i-f);
            f = i;
        }
    }
    fa[a[n-1]] = max(fa[a[n-1]], n-f);
    f = 0; // freq. for each num.
    for (int i = 1; i < n; ++i) {
        if (b[i] != b[i-1]){
            fb[b[i-1]] = max(fb[b[i-1]], i-f);
            f = i;
        }
    }
    fb[b[n-1]] = max(fb[b[n-1]], n-f);

    for (int i = 0; i <= n*2; ++i) {
        mx = max(mx, fa[i] + fb[i]);
    }
    cout << mx;
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