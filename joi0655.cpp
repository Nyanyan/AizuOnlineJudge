#pragma GCC optimize("Ofast")
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <chrono>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int A[n];
    vector<pair<int,int> > a(n);
    rep(i,n){
        int tmp;
        cin >> tmp;
        A[i] = tmp;
        pair<int,int>p=make_pair(tmp,i);
        a.at(i) = p;
    }

    int ans = 0;
    int i = 0;
    bool cnt = false;
    int b = 0;
    rep(j,n-1) {
        if(a.at(j).first <= 0) {
            if(cnt) b++;
            cnt = false;
        } else if(!cnt) cnt = true;
    }
    if(a.at(n-1).first > 0 || cnt) b++;
    ans = b;

    sort(a.begin(),a.end());

    int c = ans;
    int m = (int)a.size();
    int x = 0;
    rep(i,m){
        int d = a.at(i).first;
        if(d > x){
            x = d;
            int e = 1;
            for(int j=i+1;j<m;j++) {
                int f = a.at(j).first;
                //cout << f << endl;
                if(f == d) e++;
                else if(f > d) break;
            }
            rep(j,e) {
                int f = a.at(i+j).second;
                int stat1 = -1;
                int stat2 = -1;
                //cout << d << ' ' << f << ' ' << e << ' ';
                if(f > 0) {
                    int g = A[f-1];
                    //cout << g << ' ';
                    if(g > d) stat1 = 1;
                    else if(g <= d) stat1 = 2;
                }
                if(f < n-1) {
                    int g = A[f+1];
                    //cout << g << endl;
                    if(g > d) stat2 = 1;
                    else if(g <= d) stat2 = 2;
                }
                int stat = 0;
                if(stat1 == stat2) stat = stat1;
                if(stat == 1) c++;
                else if(stat == 2) c--;
                //cout << "num " << d << ' ' << e << ' ' << c << ' ' << stat1 << stat2 << endl;
            }
            if(c > ans) ans = c;
            //cout << "aaaaaaaaaaaaa" << endl;
        }
    }

    cout << ans << endl;
    return 0;
}


/*
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];

    int ans = 0;
    int i = 0;
    bool cnt;
    int b,m,tmp;
    for(;;) {
        cnt = false;
        m = 1000000000;
        b = 0;
        rep(j,n-1) {
            tmp = a[j] - i;
            if(tmp <= 0) {
                if(cnt) b++;
                cnt = false;
            } else {
                if(!cnt) cnt = true;
                if(tmp < m) m = tmp;
            }
        }
        if(a[n-1] > i || cnt) b++;
        if(b == 0) break;
        if(b > ans) ans = b;
        i += m;
    }
    cout << ans << endl;
    return 0;
}
*/