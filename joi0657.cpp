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
    rep(i,n) rep(j,a[i]) b.push_back(i); //すべての人
    int ans = 1;
    for(int i=1;i<=(int)b.size();i++) ans *= i; //すべての組み合わせ
    rep(i,n) {
        rep(j,n-i) {
            
        }
    }
}