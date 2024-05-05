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
    yomn
    string joke = "HQ9";
    string x;

    cin >> x;

    for (int i = 0; i < joke.size(); ++i) {
        for (int j = 0; j < x.size(); ++j) {
            if (joke[i] == x[j]){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    END
}
