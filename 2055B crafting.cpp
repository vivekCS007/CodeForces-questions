#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb(n) push_back(n)
#define vi vector<long long>
#define vll vector<ll>
#define pii pair<long long, long long>
#define pll pair<ll, ll>
using namespace std;
#define set(x) unordered_set<x>
#define map(x, y) unordered_map<x, y>
#define MOD 1000000007

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

long long power(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n);
        vi b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        long long f = 0;
        long long c = 0;
        long long x;
        long long j;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
                f++;
            if (a[i] < b[i])
            {
                c++;
                x = a[i] - b[i];
                j = i;
            }
        }
        if (c > 1)
        {
            no;
            continue;
        }
        if (f == n)
        {
            yes;
            continue;
        }
        long long valid = 1;
        
        for (int i=0;i<n;i++){
            if (i==j) continue;
            a[i] += x;
            if (a[i] < b[i]) {
                valid=0;
                break;
            }
        }
        if (valid)
            yes;
        else
            no;
    }
    return 0;
}
