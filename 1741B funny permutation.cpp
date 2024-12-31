#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n%2==0){
            for(int i=1;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
        else if (n==1 or n==3){
            cout<<-1<<endl;
        }
        else if (n==5){
            cout<<"3 4 5 1 2"<<endl;
        }
        else{
            int a=n;
            for (int i=1;i<=n;i++){
                if (i==n/2 || i==n/2+1){
                    cout<<a-1<<" "<<a<<" ";
                }
                else{
                    if (a>1) cout<<a<<" "<<a-1<<" ";
                    else cout<<a<<" ";
                }
                i++;
                a=a-2;
            }
            cout<<endl;
        }
    }
}