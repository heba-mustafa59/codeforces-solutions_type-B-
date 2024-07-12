/*
      yildiz
*/
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
    int n, a;
    cin >> n >> a;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    --a;
    int c = v[a] ? 1 : 0;  

    for (int i = 1; i < n; i++) {
        int r = a + i;
        int l = a - i;

        if (l >= 0 || r < n) {
            c += (l >= 0 && r < n) ? (v[r] && v[l] ? 2 : 0) 
                : (l >= 0 ? (v[l] ? 1 : 0)  
                    : (r < n ? (v[r] ? 1 : 0)  
                        : 0));
        }
    }

    cout << c;
    return 0;
}