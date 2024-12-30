#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i=0;i<n;i++){
        cin>>s[i];
        s[i]+=" ";
        string a;
        cin>>a;
        s[i]+=a;
    }
    for (int i=0;i<n;i++){
        swap(s[i][0],s[i][4]);
        cout<<s[i]<<endl;
    }
    
    
}