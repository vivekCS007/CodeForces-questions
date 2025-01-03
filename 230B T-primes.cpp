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

bool isprime(ll n){
    if (n<=1){
        return false;
    }
    for (ll i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if (n<=3){
            cout<<"NO\n";
            continue;
        }
        ll i = sqrt(n);
        if (i*i==n && isprime(i)){
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}