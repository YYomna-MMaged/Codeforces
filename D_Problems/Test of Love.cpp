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
    int n, m, k, y = 0;
    string r = "", x;
    cin >> n >> m >> k >> x;

    r.push_back('L');
    r += x;
    r.push_back('L');

    deque< int > ls;
    for (int i = 0; i < n+2; ++i) {
        if (r[i] == 'L')
            ls.push_back(i);
    }

    int cs = 0, ws = 0, lp = 1;

    while (y < n+1){
        if (m >= ls[lp] - y) {
            y = ls[lp];
            lp++;
        }

        else{
            y += m;
            if (y >= n+2){
                cout << "YES";
                END
                return;
            }

            while (y < n+2 && y < ls[lp]){
                if (r[y] != 'C' && k > 0){
                    y++;
                    k--;
                }
                else{
                    cout << "NO";
                    END
                    return;
                }
            }
        }
    }
    cout << "YES";
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