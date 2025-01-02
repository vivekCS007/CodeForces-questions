#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        int sum=0;
        int c1=0,c2=0;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1) c1++;
            else c2++;
        }
        if (sum%2!=0){
            cout<<"NO\n";
            continue;
        }
        if (c1%2!=0){
            cout<<"NO\n";
        }
        else if (c1%2==0 && c2%2==0){
            cout<<"Yes\n";
        }
        else if(c1%2==0 && c2%2==1 && c1>0){
            cout<<"Yes\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}