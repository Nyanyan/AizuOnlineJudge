#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    char a[n][m],b[n][m];
    rep(i,n) rep(j,m) cin >> a[i][j];
    rep(i,n) rep(j,m) cin >> b[i][j];

    int cnt = 0;
    rep(i,n) rep(j,m) if(a[i][j] != b[i][j]) cnt++;
    cout << cnt << endl;
}