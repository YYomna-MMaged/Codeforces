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

    int n, x;
    cin >> n;

    deque< int > po;
    deque< int > ne;
    deque< int > ze;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        if(x > 0)
            po.push_back(x);
        else if(x < 0)
            ne.push_back(x);
        else
            ze.push_back(x);
    }

    if(ne.size() % 2 == 1){
        if (po.empty()){
            cout << 1 << " " << ne[0];
            END
            cout << ne.size()-1 << " ";
            for (int i = 1; i < ne.size(); ++i) {
                cout << ne[i] << " ";
            }
            END
        }

        else if(po.size() > 0){
            cout << ne.size() << " ";
            for (int i = 0; i < ne.size(); ++i) {
                cout << ne[i] << " ";
            }
            END
            cout << po.size() << " ";
            for (int i = 0; i < po.size(); ++i) {
                cout << po[i] << " ";
            }
            END
        }

        cout << 1 << " " << ze[0];
        END
    }
    if(ne.size() % 2 == 0){
        if (po.empty()){
            cout << 1 << " " << ne[0];
            END
            cout << ne.size()-2 << " ";
            for (int i = 1; i < ne.size()-1; ++i) {
                cout << ne[i] << " ";
            }
            END
            cout << 2 << " " << ze[0] << " " << ne[ne.size()-1];
            END
        }

        else if(po.size() > 0){
            cout << ne.size()-1 << " ";
            for (int i = 0; i < ne.size()-1; ++i) {
                cout << ne[i] << " ";
            }
            END
            cout << po.size() << " ";
            for (int i = 0; i < po.size(); ++i) {
                cout << po[i] << " ";
            }
            END
            cout << 2 << " " << ze[0] << " " << ne[ne.size()-1];
            END
        }


    }
    END
}