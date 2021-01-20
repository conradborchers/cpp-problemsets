#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n >> m;
        int res[n][m];
        for (int j=0; j<n; j++){
            for (int k=0; k<m; k++){
                if (j==n-1 && k==m-1)
                    cout << "W";
                else
                    cout << "B";
            }
            cout << "\n";
        }   
    }
}
