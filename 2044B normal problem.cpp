#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a;
    for (int i=0;i<n;i++){
        string c;
        cin>>c;
        reverse(c.begin(),c.end());
        for (int j=0;j<c.length();j++){
            if (c[j]=='p') c[j]='q';
            else if (c[j]=='q') c[j]='p';
            else continue;
        }
        a.push_back(c);
    }
    for (string i:a) cout<<i<<endl;
}