#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a[3];
    rep(i,3) cin >> a[i];
    sort(a,a+3);
    rep(i,2) cout << a[i] << ' ';
    cout << a[2] << endl;
}