#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a=0;
    int t=n;
    while(n){
        long long x;
        cin>>x;
        if (x==1){
            a++;
        }
        else{
            a=a+1+(t-n+1)*(x-1);
        }
        n--;
    }
    cout<<a<<"\n";
}