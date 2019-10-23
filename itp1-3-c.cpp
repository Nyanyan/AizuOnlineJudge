#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a,b;
    vector<vector<int>> xy;
    while(true) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        else xy.push_back({min(a,b),max(a,b)});
    }
    rep(i,(int)xy.size()) cout << xy[i][0] << ' ' << xy[i][1] << endl;
}