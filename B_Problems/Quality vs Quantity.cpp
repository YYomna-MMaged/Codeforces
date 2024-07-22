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
    int n, total = 0, sum = 0;
    cin >> n;

    deque< int > a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int i;
    bool flag = false;

    for (i = 0; i < n; ++i) {
        sum += a[i];

        if ((total - sum) < sum) {
            flag = true;
            break;
        }
    }

    if (flag && (n - (i+1)) > i+1){
        cout << "YES";
    }

    else if (flag){
        int mi = 0;
        while (i >= 0 && sum > (total - sum)){
            sum -= a[i];
            total -= a[i];
            mi++;

            if (((n-mi) - (i-mi+1)) > i-mi+1 && (total - sum) < sum){
                cout << "YES";
                END
                return;
            }
            i--;
        }

        cout << "NO";
    }
    else
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