/*
      yildiz
*/
#define ll long long 
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 3)
            cout << -1;
        else if (n == 5)
            cout << "4 5 1 2 3";
        else {
            if (n % 2 == 0) {
                for (ll j = n; j > 0; j--)
                    cout << j << " ";
            }
            else {
                for (ll j = n; j >3; j -= 2) {
                    cout << j - 1 << " " << j << " ";
                }
                cout << "3 2 1";
            }
        }
        cout <<  "\n";
    }
    return 0;
}