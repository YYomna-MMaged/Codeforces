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

unsigned int div(unsigned int n)
{
    unsigned int c = 0;
    for(unsigned int i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n%i == 0)
            c++;
    }
    return c+2;
}
int onx[] = {1 , 0 , -1 , 0};
int ony[] = {0 , 1 , 0 , -1};

//int ten (ll x)
//{
//    ll sum = 0;
//    while (x > 0)
//    {
//        sum += x%10;
//        x /= 10;
//    }
//    return sum;
//}
const int SIZE = 1e5;
bool possible(const vector<long long>& logs, int K, long long length) {
    long long cuts = 0;
    for (int i = 0; i < logs.size(); ++i) {
        cuts += max(0LL, (logs[i] - 1) / length);
    }
    return cuts <= K;
}
void no_change(int * ptr) {
    ptr = 0;
}

void change_ptr(int *& ptr) {
    ptr = 0;
}
//-------------------------------
struct Tnode{
    int val;
    Tnode *left;
    Tnode *right;
    Tnode(int v){
        val = v;
        left = nullptr;
        right = nullptr;
    }
};
class Tree{
public:
    Tnode* root;
    Tree(){
        root = nullptr;
    }
    int insert(const int el) {
        int parent = 0;
        Tnode *p = root, *prev = 0;
        while (p != 0) {
            prev = p;
            if (p->val < el)
                p = p->right;
            else p = p->left;
        }
        if (root == 0)  {
            root = new Tnode(el);
        }
        else if (prev->val < el) {
            parent = prev->val;
            prev->right = new Tnode(el);
        }
        else {
            parent = prev->val;
            prev->left = new Tnode(el) ;
        }
        return parent;
    }
};
//---------------------------------------------

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
