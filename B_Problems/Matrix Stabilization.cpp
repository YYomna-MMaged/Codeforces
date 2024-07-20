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

int onx[] = {1 , 0 , -1 , 0};
int ony[] = {0 , 1 , 0 , -1};

void solve(){
    int n, m;
    cin >> n >> m ;
    int mat[n][m];
//    int upmat[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
//            upmat[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {

            int mx = 0;

            for (int k = 0; k < 4; ++k) {
                if ((i+onx[k]) >= 0 && (i+onx[k]) < n && (j+ony[k]) >= 0 && (j+ony[k]) < m){
                    mx = max(mx, mat[i+onx[k]][j+ony[k]]);
                }
            }

            if (mx < mat[i][j])
                cout << mx << " ";
            else
                cout << mat[i][j] << " ";
        }
        END
    }
}
int32_t main() {
    yomn

    int t = 1;
    cin >> t;

    while (t--){
        solve();
    }
}
