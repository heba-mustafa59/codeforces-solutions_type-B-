/*
      yildiz
*/
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector <long long >v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long ma = v[n - 1] - v[0] + v[n - 2] - v[1];
        cout << ma << "\n";

    }
    return 0;
}