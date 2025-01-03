#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    float avg=(float)sum/n;
    int c=0;
    int d=0,e=0;
    for (int i=0;i<n;i++){
        if (a[i]!=avg){
            c++;
            if (a[i]>avg){
                d=i+1;
            }
            else if (a[i]<avg){
                e=i+1;
            }
        }
    }
    if (c==0){
        cout<<"Exemplary pages.\n";
        return 0;
    }
    avg=(int)avg;   
    if (c==2 && a[d-1]+a[e-1]==2*avg){
        cout<<a[d-1]-avg<<" ml. from cup #"<<e<<" to cup #"<<d<<".\n";
        return 0;
    }
    cout<<"Unrecoverable configuration.\n";
}