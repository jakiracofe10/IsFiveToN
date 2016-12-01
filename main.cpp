#include <iostream>

using namespace std;

//Time: O(n)
//Space: O(n)

bool isFiveToN(int n) {
    if (n==0) {
        return false;
    }
    if (n==1) {
        return true;
    }
    if (n%5 == 0) {
        return isFiveToN(n/5);
    }
    return false;
}


int main() {
    int n;
    cin >> n;
    bool result = isFiveToN(n);
    cout << to_string(result);
    return 0;
}