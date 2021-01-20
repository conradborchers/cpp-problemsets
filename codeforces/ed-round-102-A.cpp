#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, n, d, temp;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
    	vector<int> v;
    	cin >> n >> d;
    	for (int i=0;i<n;i++){
    		cin >> temp;
    		v.push_back(temp);
    	}
    	sort(v.begin(), v.end());
    	if (v[n-1]<=d) {
    		cout << "YES\n";
    		continue;
    	}
    	if ((v[0]+v[1])<=d)
    		cout << "YES\n";
    	else
    		cout << "NO\n";
    }
}
