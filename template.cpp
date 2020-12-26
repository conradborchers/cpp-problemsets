#include <bits/stdc++.h>

using namespace std;

void solve(int &i, int &j) {
	cout << i+j << '\n';
}

int main() {
	int tc; 
	int i; int j;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
    	cin >> i >> j;
        // cout << "Case #" << t  << ": ";
        solve(i, j);
    }
}
