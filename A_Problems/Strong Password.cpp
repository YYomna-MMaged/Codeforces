*
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
    string x;
    char z = 'a';
    cin >> x;

    bool f = true;
    for (int i = 0; i < x.size(); ++i) {
        cout << x[i];
        if (x[i] == x[i+1] && f){
            if (x[i] == 'z')
                cout << (char)(x[i]+'b'-'a'-2);
            else
                cout << (char)(x[i]+'b'-'a');
            f = false;
        }
    }

    if (f){
        if (x.back() == 'z')
            cout << (char)(x[x.size()-1]+'b'-'a'-2);
        else
            cout << (char)(x[x.size()-1]+'b'-'a');

    }

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