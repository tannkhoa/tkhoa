#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x){
    if (x < 0) return false;
    int r = (int) sqrt(x);
    return r*r == x;
}

int main() {
    vector<int> res;
    for (int n = 10; n <= 99; ++n) {
        int rev = (n/10) + (n%10)*10; // đảo chữ số ab -> ba
        int diff = n - rev;
        if (diff >= 0 && isPerfectSquare(diff)) {
            res.push_back(n);
        }
    }

    cout << "Cac so hai chu so thoa yeu cau:\n";
    for (size_t i = 0; i < res.size(); ++i) {
        int n = res[i];
        int rev = (n/10) + (n%10)*10;
        cout << n << " (dao: " << rev << ", hieu: " << n - rev << ")\n";
    }
    cout << "Tong so: " << res.size() << "\n";
    return 0;
}
