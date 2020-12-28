#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	long long step;

	for (int i=pow(10, 5); i<n+pow(10, 5); i++){

		step = i/2 + i;

		cout << step << " ";

	}

	cout << '\n';
}
