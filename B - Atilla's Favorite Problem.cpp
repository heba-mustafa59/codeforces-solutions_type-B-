/*
      yildiz
*/
#define ll long long
#define habboosh main
#include <bits/stdc++.h>
using namespace std;

int habboosh() {
    int t; cin >> t;
    while (t--) {
        char ch = 'a';
        int size; cin >> size;
        string s; cin >> s;
        for (int i = 0; i < size; i++)
            ch = max(ch, s[i]);
        cout << int(ch - 'a' + 1) <<  "\n";
    }
    return 0;
}