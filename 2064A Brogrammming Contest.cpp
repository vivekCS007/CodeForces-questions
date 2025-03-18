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
        string s;
        cin >> s;
        int x = 0;
        string t="";
        for (int i=0;i<n;i++){
            if (s[i]=='0') x++;
            if (s[i]=='1') break;
        }

        if (x!=0) s.erase(0,x);
        // cout<<c<<s<<endl;
        if (s.size()==0) {
            cout<<0<<endl;
            continue;
        }
        int c=0;
        for (int i=1;i<s.size();i++){
            if (s[i]!=s[i-1])c++;
        }
        // if (s[s.size()-1]=='0') c++;
        c++;
        cout<<c<<endl;
    } 
    return 0;
}