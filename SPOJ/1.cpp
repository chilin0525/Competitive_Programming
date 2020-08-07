#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);

    long long a;
    vector<long long> s;
    bool flag = true;

    while (cin >> a) {
        if (a == 42) {
            flag = false;
        }
        if (flag) {
            cout << a << endl;
        }
    }


    return 0;
}
