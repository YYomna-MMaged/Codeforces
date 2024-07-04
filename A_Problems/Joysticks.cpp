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

    int a1, a2, m = 0;
    cin >> a1 >> a2;

    while (a1 > 0 && a2 > 0){
        if (a1 <= 1 && a2 <= 1){
            break;
        }

        else if (a1 <= a2){
            a1++;
            a2 -= 2;
        }

        else{
            a2++;
            a1 -= 2;
        }
        m++;
    }

    cout << m;
    END
}