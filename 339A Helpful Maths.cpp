#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if (n==1){
        cout<<s;
        return 0;
    }
    vector<int> v;
    int j=0;
    for (int i=0;i<n;i++){
        v.push_back(0);
        while(s[i]!='+' && i<n){
            v[j]=v[j]*10+(s[i]-'0');
            i++;
        }
        j++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1) cout<<"+";
    }
}