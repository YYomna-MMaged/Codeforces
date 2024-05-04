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

int32_t main() {
    int t;
    cin >> t;

    while (t--){
        int n, c, d;
        cin >> n >> c >> d;

        deque< int > a(n*n);
        deque<deque<int>> temp(n, deque<int>(n, 0));
        deque< int > b;


        for (int i = 0; i < n*n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        temp[0][0] = a[0];

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                temp[i][j] = temp[i][j-1] + d;
            }
            if (i+1 < n){
                temp[i+1][0] = temp[i][0] + c;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                b.push_back(temp[i][j]);
            }
        }

        sort(b.begin(), b.end());
        if (b == a)
            cout << "YES";
        else
            cout << "NO";
        END
    }

}
