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
        int n,k;
        cin>>n>>k;
        vi a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        int x=*min_element(a.begin(),a.end());
        if (x>=k) {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        map <int,int> mp;
        for (int i=0;i<n;i++) {
            mp[a[i]]++;
        }
        for (auto x:mp) {
            int p=x.first;
            int q=k-p;
            if (p==q) {
                ans+=x.second/2;
                // mp.erase(p);
            }
            else{
                if (mp.find(q)!=mp.end()) {
                    ans+=min(x.second,mp[q]);
                    mp.erase(q);
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}