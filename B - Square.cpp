/*
      yildiz
*/
#define ll long long
#define habboosh main
#include <bits/stdc++.h>
using namespace std;


int habboosh() {

    int x, a, b, c, d;
    cin >> x;
    while (x--) {
        cin >> a >> b >> c >> d;
        if (max(a, b) == max(c, d)) {
            if (min(a, b) + min(c, d) == max(a, b))
                cout << "Yes\n";

            else cout << "No\n";
        }
        else if (min(a, b) == min(c, d)) {
            if (max(a, b) + max(c, d) == min(a, b))
                cout << "Yes\n";

            else cout << "No\n";
        }
        else cout << "No\n";

    }
    return 0;
}