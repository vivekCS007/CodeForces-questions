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
        int n,m;
        cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++) cin>>a[i];
        int b;
        cin>>b;
        if (n==1) {
            yes;
            continue;
        }
        bool ans=true;
        int prev=INT_MIN;
        for (int i=0;i<n;i++) {
            int og=a[i];
            int mo=b-a[i];
            if (og<prev && mo<prev) {
                ans=false;
                break;
            }
            if (og>=prev && mo>=prev) prev = min(og,mo);
            else if (og>=prev) prev=og;
            else prev = mo;
        }
        // for (int i=0;i<n-1;i++) {
        //     if (a[i]>a[i+1]) {
        //         ans=false;
        //         break;
        //     }
        // }

        if (ans) yes;
        else no;
        
    }
    return 0;
}