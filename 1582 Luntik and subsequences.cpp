#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long c=0;
        int o=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if (x==1){
                c++;
            }
            if(x==0){
                o++;
            }
        }
        if(c && o){
            c= c*(pow(2,o));
        };
        cout<<c<<endl;   
    }
}