#include <bits/stdc++.h>

using namespace std;

void solve(int &n, vector<int> v){

	int input;
	for (int i=0; i < n; i++){
		cin >> input;
		v.push_back(input);
	}

	int s = size(v);

	vector<int> decrypted;

	while(s--){

		if (size(decrypted)%2 == 0){
			decrypted.push_back( v.front() );
			v.erase( v.begin() );
		}

		else{
			decrypted.push_back( v.back() );
			v.pop_back();
		}

	}

	for (int i : decrypted){
		cout << i << ' ';
	}

	cout << '\n';

}

int main() {
	
	int tc; int n;
	vector<int> v;
    
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
    	cin >> n;
    	solve(n, v);
    }

}
