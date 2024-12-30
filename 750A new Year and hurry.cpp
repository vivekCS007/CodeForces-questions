#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n;
    cin>>n>>k;
    int rem=240-k;
    int sum=0;
    int a=0;
    for (int i=1;i<=n;i++){
        sum+=5*i;
        a=i-1;
        if (sum>rem){
            break;
        }
    }
    if (sum<=rem) a++;
    cout<<a<<"\n";
}