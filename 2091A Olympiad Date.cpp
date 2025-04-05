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
    return __builtin_popcount(n);
}

int count_zero(int n) {
    return __builtin_clz(n);
}

// Power function for calculating a^b
long long power(long long a, long long b) {
    long long result = 1;
    while(b > 0) {
        if(b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

// Modular Exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long res = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

// Sieve of Eratosthenes to find primes up to n
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

// Check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Find minimum of three numbers
int min3(int a, int b, int c) {
    return min(a, min(b, c));
}

// Find maximum of three numbers
int max3(int a, int b, int c) {
    return max(a, max(b, c));
}

// Binary Search to find the index of the element in sorted array
int binary_search(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Subarray Sum using prefix sum array
int subarray_sum(const vector<int>& prefix, int left, int right) {
    if (left == 0) return prefix[right];
    return prefix[right] - prefix[left - 1];
}

// Prefix Sum Array
vector<int> prefix_sum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

// Find the median of an array
double median(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 == 1) return arr[n / 2];
    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}

// Calculate nCr (Combination) % MOD
long long nCr(int n, int r) {
    if (r > n) return 0;
    long long num = 1, denom = 1;
    for (int i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        denom = (denom * (i + 1)) % MOD;
    }
    return (num * mod_exp(denom, MOD - 2, MOD)) % MOD;
}

// Factorial function modulo MOD
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T x) : data(x), next(nullptr) {}
    Node() : data(T()), next(nullptr) {}
    Node(T x, Node* next) : data(x), next(next) {}
};

template <typename T>
class DoublyNode {
public:
    T data;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(T x) : data(x), next(nullptr), prev(nullptr) {}
    DoublyNode() : data(T()), next(nullptr), prev(nullptr) {}
    DoublyNode(T x, DoublyNode* next, DoublyNode* prev) : data(x), next(next), prev(prev) {}
};

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
        int c1=0,C2=0,c3=0,c0=0,c5=0;
        int ans=0;
        fo(i,n){
            if(a[i]==1) c1++;
            else if(a[i]==2) C2++;
            else if(a[i]==3) c3++;
            else if(a[i]==0) c0++;
            else if(a[i]==5) c5++;
            if(c0>=3 && c1>=1  && c3>=1 && C2>=2 && c5>=1){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}