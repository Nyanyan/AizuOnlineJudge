#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    int mx[2],my[2];
    my[0] = y - r;
    my[1] = y + r;
    mx[0] = x - r;
    mx[1] = x + r;
    string ans = "Yes";
    rep(i,2) if(mx[i] < 0 || mx[i] > w || my[i] < 0 || my[i] > h) ans = "No";
    cout << ans << endl;
}