#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    rep(i,n) cin >> x[i];
    int m;
    cin >> m;
    int a[m];
    rep(i,m) cin >> a[i];
    
    rep(i,m) {
        if(x[a[i]-1] != 2019 && ((a[i] < n && x[a[i]-1]+1 != x[a[i]]) || n == a[i])) x[a[i]-1]++;
    }
    rep(i,n) cout << x[i] << endl;
}