#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a > b) cout << "a > b" << endl;
    else if (a < b) cout << "a < b" << endl;
    else cout << "a == b" << endl;
}