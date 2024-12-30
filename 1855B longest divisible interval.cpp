#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long n;
        cin >> n;
        int count = 0;
        int ma=0;
        for (int i = 1; i <= 50; ++i) {
            if (n % i == 0) {
                count++;
                ma=max(ma,count);
            } else {
                count=0;
            }
        }
        cout << ma<< endl;  
    }
    
    return 0;
}
