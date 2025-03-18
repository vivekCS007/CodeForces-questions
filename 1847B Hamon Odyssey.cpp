#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb(n) push_back(n)
#define eb(n) emplace_back(n)
#define fo(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vpi vector<pair<int,int>>
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;
#define set(x) unordered_set<x>
#define map(x, y) unordered_map<x, y>
#define MOD 1000000007

long long gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

//bool issquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int count_one(int n) {
    int count=0;
    while(n){
        n = n&(n-1);
        count++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        fo(i,n) cin >> a[i];
        int x=a[0];
        if (n==1) {
            cout << 1 << endl;
            continue;
        }
        int c=a[0];
        int ans=0;
        fo(i,n) {
            c&=a[i];
            if (c==0) {
                ans++;
                if (i+1<n) {
                    c=a[i+1];
                }
            }
        }
        if (ans==0) ans++;
        cout << ans << endl;
        
    }
    return 0;
}