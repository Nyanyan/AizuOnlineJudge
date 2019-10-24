#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int t=0,cnt=0,ans=0;
    while(t < c) {
        t += a;
        cnt++;
        if(cnt == 7) {
            cnt = 0;
            t += b;
        }
        ans++;
    }
    cout << ans << endl;
}