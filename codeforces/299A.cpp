#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	set<int> s;
	int temp;
	for (int i=0; i<n; i++){
		cin >> temp;
		s.insert(temp);
	}

	int lowest = pow(10, 9);

	for (int i : s)
		if (i < lowest)
			lowest = i;

	bool divisible = 1;

	for (int i : s)
		if (i%lowest != 0)
			divisible = 0;

	if (divisible)
		cout << lowest << '\n';
	else
		cout << -1 << '\n'; 

}
