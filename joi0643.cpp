#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    int a[h][w];
    rep(i,h) rep(j,w) cin >> a[i][j];

    vector<int> ans;
    int tmp;
    rep(i,h) {
        rep(j,w) {
            tmp = 0;
            rep(k,h) rep(l,w) tmp += min(abs(i-k),abs(j-l)) * a[k][l];
            ans.push_back(tmp);
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans.at(0) << endl;
}