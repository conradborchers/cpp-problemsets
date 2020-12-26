#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> v1;
    int input;
    for (int i=0; i<p; i++){
    	cin >> input; 
    	v1.push_back(input);
    }

    int q;
    cin >> q;
    vector<int> v2;
    for (int i=0; i<q; i++){
    	cin >> input; 
    	v2.push_back(input);
    }

    // Concat vectors and cast to set
    move(v2.begin(), v2.end(), back_inserter(v1));
    set<int> s( v1.begin(), v1.end() );

    if (size(s) == n)
    	cout << "I become the guy.\n";
    else
    	cout << "Oh, my keyboard!\n";

}
