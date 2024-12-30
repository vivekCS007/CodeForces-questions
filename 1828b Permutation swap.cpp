#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> ans;
        vector<int> pos(n + 1, -1);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                ans.push_back(abs(pos[i + 1] - i));
            }
        }
        int res = ans[0];
        for (auto d : ans) {
            res = gcd(res, d);
        }
        cout << res << "\n";
    }
    return 0;
}
