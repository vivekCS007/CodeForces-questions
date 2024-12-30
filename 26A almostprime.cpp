#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if (n<6){
        cout<<0;
        return 0;
    }
    int count=0;
    for(int i=6;i<=n;i++){
        int temp=i;
        int div=0;
        for(int j=2;j<=temp;j++){
            if(isPrime(j)){
                if (temp%j==0) div++;
                while(temp%j==0){
                    temp/=j;
                }

            }
        }
        if(div==2){
            count++;
        }
    }
    cout<<count<<"\n";


}