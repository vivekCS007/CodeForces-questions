#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(26,0);
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        char ch=s[i];
        int j=ch-'a';
        int k=ch-'A';
        if(j>=0 && j<26) a[j]++;
        if(k>=0 && k<26) a[k]++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {  
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}