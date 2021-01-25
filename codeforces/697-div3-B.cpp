#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cno cout << "NO\n";
#define cyes cout << "YES\n";

int main() {
    fast;
    int t;
    long long n, rest, div;
    cin >> t;
    for (int i=0; i<t; i++) {
    	cin >> n;
        div=n/2020;
        rest=n%2020;
        if (div >= rest){
            cyes;
        }
        else{
            cno;
        }
    }
}
