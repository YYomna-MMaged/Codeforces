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

    int m, x, y, p = 0, j;
    cin >> m;

    int c[m];

    for (int i = 0; i < m; ++i) {
        cin >> c[i];
        c[i] += p;
        p = c[i];
    }

    cin >> x >> y;

    for (j = 0; j < m-1; ++j) {
        if (c[j] >= x)
            break;
    }
    if ((c[m-1] - c[j]) >= x ){
        while ((c[j] > y || (c[m-1] - c[j]) > y) && j < m){
            j++;
        }

        if (j < m)
            cout << j+2;
        else
            cout << 0;
        END
    }
    else
        cout << 0;

    END
}