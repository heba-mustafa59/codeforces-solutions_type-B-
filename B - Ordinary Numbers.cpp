/*
      yildiz
*/
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n <= 9) {
            cout << n << "\n";
        }
        else {
            long long  c = 9, a = 11;
            while (a <= n) {
                int i = 1, m = 9;
                while (m--) {
                    long long p = a * i;
                    if (p > n) {
                        break;
                    }
                    c++;
                    i++;
                }
                a = a * 10 + 1;
            }
            cout << c << "\n";

        }

    }
}