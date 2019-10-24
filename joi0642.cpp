#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    vector<int> b;
    int cnt = 0;
    rep(i,n) {
        if(a[i] == 1 && i < n-1) cnt++;
        else {
            if(a[i] == 1) cnt++;
            b.push_back(cnt);
            cnt = 0;
        }
    }
    if((int)b.size() == 0) b.push_back(n);
    sort(b.rbegin(),b.rend());
    int ans = b.at(0) + 1;
    cout << ans << endl;
    return 0;
}