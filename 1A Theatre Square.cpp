#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    cout<<(long long)(n%a==0?n/a:n/a+1)*(m%a==0?m/a:m/a+1);
}