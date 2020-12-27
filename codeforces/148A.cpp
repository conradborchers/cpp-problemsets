#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n_inputs = 4;
    vector<int> divisors;

    int temp;
    while (n_inputs--){
    	cin >> temp;
    	divisors.push_back(temp);
    }

    int d;
    cin >> d;

    bool ok;
    int res = 0;

    for (int i=1; i<=d; i++){

    	ok = 1;

    	for (int j : divisors){
    		if (i%j == 0)
    			ok = 0;
    	}

    	if (ok)
    		res++;

    }

    cout << d-res << '\n';

}
