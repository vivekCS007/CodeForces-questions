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
        int n;
        cin>>n;
        vi a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        if (a[1]<a[0]) {
            no;
            continue;
        }
        int x=min(a[0],a[1]);
        int c=1;
        // a[0]=a[0]-x;
        // a[1]=a[1]-x;
        a[0]=min(a[0],a[1]);
        for (int i=1;i<n;i++) {
            // a[i]=a[i]-min(a[i],a[i-1]);
            if (a[i] < a[i-1]) {
                c = 0;
                break;
            }
            a[i] = a[i]-min(a[i], a[i-1]);
        }
        // int c=1;
        // for (int i=1;i<n;i++) {
        //     if (a[i]<a[i-1]) {  
        //         c=0;
        //     }
        // }
        if (c) yes;
        else no;
    }
    return 0;
}