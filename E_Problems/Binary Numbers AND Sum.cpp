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

int MOD =  998244353;
int32_t main() {
    yomn
    int n, m, pw = 1, r = 0, an = 0;
    string a, b;

    cin >> n >> m >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < m; ++i) {
        if (i < n && a[i] == '1')
            r = (r + pw ) % MOD;

        if (b[i] == '1')
            an = (an + r) % MOD;

        pw = (pw * 2) % MOD;
    }

    cout << an;
    END
}