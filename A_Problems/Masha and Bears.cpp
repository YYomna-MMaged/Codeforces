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
    int v1, v2, v3, v4;
    cin >> v1 >> v2 >> v3 >> v4;

    if (v4 > v3*2 || v4*2 < v3 || v4 >= v2 || v4 >= v1 )
        cout << -1;
    else{
        cout << v1*2 << endl << v2*2 << endl;
        if (v3 > v4)
            cout << v3 << endl;
        else
            cout << v3*2 << endl;
    }
}
int32_t main() {
    yomn

    int t = 1;
//   cin >> t;

    while (t--){
        solve();
    }
}