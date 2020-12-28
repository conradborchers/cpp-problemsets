#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;

	int A[n][m];

	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)	
			cin >> A[i][j];

	// Chose street (row) with highest min value

	const int max_c = pow(10, 9);

	// Get min for each col

	int lowest[n];
	for (int i=0; i<n; i++)
		lowest[i] = max_c;

	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)	
			if (A[i][j] < lowest[i])
            	lowest[i] = A[i][j];

    // Choose row with highest min

    int highest = 0;
    for (int i : lowest)
    	if (i > highest)
    		highest = i;

    cout << highest << '\n';

}
