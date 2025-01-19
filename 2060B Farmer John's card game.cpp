#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb(n) push_back(n)
#define vi vector<int>
#define vvi vector<vi>
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
        int n,m;
        cin >> n >> m;
        vvi a(n,vi(m));
        vector<pii> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> a[i][j];
            sort(a[i].begin(),a[i].end());
            v.emplace_back(a[i][0],i);
        }
        if (n==1){
            cout<<1<<endl;
            continue;
        }
        
        int z=-1,f=1;
        vi b(n);
        sort(v.begin(),v.end());
        if (n==1){
            for (auto x:v) cout<<x.second+1<<" ";
            cout<<endl;
            continue;
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int x=v[j].second;
                if (a[x][i]<=z){
                    f=0;
                    break;
                }
                else z=a[x][i];
            }
            if (f==0) break;
        }

        
        if (f==0) cout<<-1<<endl;
        else {
            for (auto x:v) cout<<x.second+1<<" ";
            cout<<endl;
        }
    }
    return 0;
}