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
    int n, m1 = INT_MAX, m2 = INT_MAX;
    cin >> n;
    deque< int > a;
    deque< int > a2;
//    map<int , int> as;

    fr(n){
//        cin >> a[i];
        int x;
        cin >> x;

        a.push_back(x);
        m1 = min(m1, x);
//        as[x]++;
//        if (as[x] == 1)
//            a.push_back(x);
    }
//    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % m1 != 0 ){
            a2.push_back(a[i]);

            m2 = min(m2, a[i]);
//            cout << "NO";
//            END
//            return;
        }
    }

    if (!a2.empty()){
        for (int i = 0; i < a2.size(); ++i) {
            if (a2[i] % m2 != 0 ){
                cout << "NO";
                END
                return;
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