#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;
}