#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; (i) < (n); (i)++)

using namespace std;

int main() {
    string s;
    cin >> s;
    int l = (int)s.size();

    int h[l+1];
    h[0] = 0;
    rep (i, l) {
        if (s[i] == '/')
            h[i+1] = h[i] + 1;
        else if (s[i] == '\\')
            h[i+1] = h[i] - 1;
        else 
            h[i+1] = h[i];
    }
    /*
    rep (i,l+1) cout << h[i] << ' ';
    cout << endl;
    */
    
    vector<vector<int>> a;
    int m = -100000;
    int n = 0;
    rep (i,l+1) {
        if (m == h[i] && i != 0) {
            a.push_back({n,i,m});
            m = -100000;
        }
        if (m < h[i] || i == 0) {
            m = h[i];
            n = i;
        }
        bool flag = false;
        for (int j=i+1;j<l+1;j++) {
            if (h[j] == m) {
                flag = true;
                break;
            }
        }
        if (flag == false) m = -100000;
    }
    /*
    rep (i,(int)a.size()) {
        rep (j,3) cout << a[i][j] << ' ';
        cout << endl;
    }
    */

    vector<int> b;
    float tmp = 0;
    rep (i, (int)a.size()) {
        for (int j=a[i][0];j<a[i][1];j++) {
            tmp += a[i][2] - h[j];
            if (s[j] == '/') tmp += 1 / 2;
            else if (s[j] == '\\') tmp -= 1 / 2;
        }
        b.push_back(int(tmp));
        tmp = 0;
    }
    //rep(i,(int)b.size()) cout << b[i] << ' ';

    if ((int)b.size() != 0) {
        int i = 0;
        while (true) {
            if (b[i] == 0) {
                b.erase(b.begin() + i);
                i--;
            }
            i++;
            if (i == (int)b.size()) break;
        }
    }

    int A = 0;
    rep (i,(int)b.size()) A += b[i];
    int k = (int)b.size();

    cout << A << endl;
    cout << k;
    if (k != 0) {
        cout << ' ';
        rep (i,k - 1) {
            cout << b[i] << ' ';
        }
        cout << b[k-1] << endl;
    } else cout << endl;


}