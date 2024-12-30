#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        long long sum=0;
        int count=0;
        int ispos=1;
        for (int i=0;i<n;i++){
            sum+=abs(v[i]);
            if (ispos){
                if (v[i]<0){
                    ispos=0;
                    count++;
                }
            }
            if (v[i]>0) ispos=1;
            
        }
        cout<<sum<<" "<<count<<"\n";
    }
}