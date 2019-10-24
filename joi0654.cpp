#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    bool flag = false;
    rep(i,n-1) {
        if(s[i] != s[i+1] && (i == 0 || (flag == false))) {
            ans++;
            flag = true;
        } else flag = false;
    }
    cout << ans << endl;
}