#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb(n) push_back(n)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;
#define set(x) unordered_set<x>
#define map(x, y) unordered_map<x, y>
#define MOD 1000000007

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        char c = s[0];
        int f=0;
        for (int i=0;i<n/2;i++){
            if (s[i]!=c){
                f=1;
                yes;
                break;
            }
        }
        if(f==0) no;
    }
    return 0;
}