#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int h,m,s;
    cin >> s;
    h = int(s / 3600);
    s -= h * 3600;
    m = int(s / 60);
    s -= m * 60;
    cout << h << ':' << m << ':' << s << endl;
}