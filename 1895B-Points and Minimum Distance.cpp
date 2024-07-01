/*
      yildiz
*/
#include <string>
#include <iostream>
#include <string>
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
        vector <long long >a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << max(a[0] * a[1], a[n - 1] * a[n - 2]) << endl;
    }
    return 0;
}