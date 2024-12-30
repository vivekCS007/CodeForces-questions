#include<bits/stdc++.h>
using namespace std;
bool isstable(int a,int b,int c){
    if(a+b>c && b+c>a && c+a>b) return true;
    return false;
}
int main(){
    int t,i=0;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(isstable(a[i],a[i],a[i+1]) && isstable(a[i],a[i+1],a[i+1])) count++;
        }
        if(count>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
