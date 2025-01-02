#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        n%=3;
        if (n==0) cout<<a<<"\n";
        else if (n==1) cout<<b<<"\n";
        else{
            int c;
            c=a^b;
            cout<<c<<"\n";
        }
    }
}