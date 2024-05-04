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


#define int long long
#define END cout << '\n' ;
#define fr(n) for(int i = 0 ; i < n ; i++)
#define s_lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define s_upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define yomn ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int32_t main() {
    set< int > tree;
    map<int , int> right;
    map<int , int> left;
    deque< int > parents;

    int n, x;
    cin >> n >> x;
    tree.insert(x);

    for (int i = 1; i < n; ++i) {
        cin >> x;
        auto it = tree.upper_bound(x);

        if(it != tree.end() && left[*it] == 0){
            cout << *it << " ";
            left[*it] = 1;
        }
        else{
            cout << *--it << " ";
//            parents.push_back(*--it);
            right[*it] = 1;
        }
        tree.insert(x);
    }
//    Tree tree;
//    int n, x;
//    cin >> n;
//
//    cin >> x; // Read the first element
////    cout << 0 << " "; // Output 0 for the root node
//    tree.insert(x); // Insert the root node into the tree
//
//    // Insert the remaining elements and output their parent values
//    for (int i = 1; i < n; ++i) {
//        cin >> x;
//        int parent = tree.insert(x);
//        cout << parent << " ";
//    }


}
