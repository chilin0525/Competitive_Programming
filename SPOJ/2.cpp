#include <bits/stdc++.h>
using namespace std;

int bas[35000];

int main() {
    cin.tie(0), ios::sync_with_stdio(0);

    fill(bas, bas + 35000, 1);
    bas[0] = 0;
    bas[1] = 0;
    vector<long long> pri;

    for (long long i = 2; i < 35000; i++) {
        if (bas[i]) {
            for (long long j = i + i; j < 35000; j+=i) {
                bas[j] = 0;
            }
            pri.push_back(i);
        }
    }

    int t;
    int tmp = 0;
    cin >> t;

    while (t--) {
        if (tmp) cout << endl;
        tmp = 1;
        long long a, b;
        cin>>a>>b;
        for (int i = a; i <= b; i++) {
            bool flag = true;
            for (auto &t : pri) {
                if ((i % t == 0 && i!=t) || (i==1)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << i << endl;
            }
        }
    }

    return 0;
}