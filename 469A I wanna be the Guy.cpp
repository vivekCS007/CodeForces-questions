#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n;
    cin>>p;
    int a[p];
    for (int i=0;i<p;i++) cin>>a[i];
    cin>>q;
    int b[q];
    for (int i=0;i<q;i++) cin>>b[i];
    int c[n+1];
    for (int i=0;i<=n;i++) c[i]=0;
    for (int i=0;i<p;i++) c[a[i]]++;
    for (int i=0;i<q;i++) c[b[i]]++;
    for (int i=1;i<=n;i++) if (!c[i]) {
        cout<<"Oh, my keyboard!";
        return 0;
    }
    cout<<"I become the guy.";
    return 0;
}