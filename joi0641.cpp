#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int A = int(n / a) * b;
    if(n % a != 0) A += b; 
    int C = int(n / c) * d;
    if(n % c != 0) C += d;
    cout << min(A,C) << endl;
}