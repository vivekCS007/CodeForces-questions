#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if (n==1){
        cout<<"CHAT WITH HER!";
        return 0;
    }
    set<char> st;
    for (int i=0;i<n;i++){
        st.insert(s[i]);
    }
    if(st.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}