/*
Template by Conrad Borchers
github.com/conradborchers
*/

#include <bits/stdc++.h>
using namespace std;

typedef vector<long long> vll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinv string sg;int temp;vll v;getline(cin,sg);stringstream iss(sg);while(iss>>temp) v.pb(temp);
#define coutv(v) for(ll j:v) cout << j << " ";
#define cno cout << "NO\n";
#define cyes cout << "YES\n";

void solve(vll v) {
    cout << accumulate(v.begin(), v.end(), 0) << "\n";
    cyes;
}

int main() {
    fast;
    int t;
    cin >> t; cin.ignore();
    for (int i=0; i<t; i++) {
        cinv;
        //coutv(v);
        //cout << "-> Result:\n";
        solve(v);
    }
}
