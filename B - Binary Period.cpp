/*
      yildiz
*/
#define ll long long
#define habboosh main
#include <bits/stdc++.h>
using namespace std;


int habboosh() {
	ll  n;
		string x;
		cin >> n;
		while (n--) {
			cin >> x;
			sort(x.begin(), x.end());
			if (x[0] == x[x.length() - 1])
				cout << x;
			else
				for (int i = 0; i < (x.length()); i++)
					cout << 1 << 0;
			cout <<  "\n";
		}
		return 0;
	}