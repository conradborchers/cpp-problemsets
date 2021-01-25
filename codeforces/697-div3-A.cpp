#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cno cout << "NO\n";
#define cyes cout << "YES\n";

int main() {
    fast;
    int t;
    long long n;
    cin >> t;
    for (int i=0; i<t; i++) {
    	cin >> n;
        if (n%2!=0 && n>=3){
            cyes;
            continue;
        }
        while(n%2==0){
            n/=2;
        }
        if (n>1){
            cyes;
        }
        else {
            cno;
        }
    }
}
