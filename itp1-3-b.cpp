#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a;
    vector<int> b;
    while(true) {
        cin >> a;
        if(a != 0) b.push_back(a);
        else break;
    }
    rep(i,(int)b.size()) cout << "Case " << i+1 << ": " << b[i] << endl;
}