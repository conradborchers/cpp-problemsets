#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t; int n;
	vector<int> v_ref;
	vector<int> v;
    
    cin >> t;

    for (int i=0; i < t; i++) {

    	v.clear();
    	v_ref.clear();

    	cin >> n;

		for (int j=1; j<=n; j++)
			v_ref.push_back(j);

		int s=size(v_ref);

		while(s--){

			// the max size for n is 100, therefore the last index is printed first
			// and then all the other indexes are printed in their original order
			// which works

			if (size(v)%101 != 0){
				v.push_back( v_ref.front() );
				v_ref.erase( v_ref.begin() );
			}

			else{
				v.push_back( v_ref.back() );
				v_ref.pop_back();
			}

		}

		for (int i : v){
			cout << i << ' ';
		}

		cout << '\n';

    }

}
