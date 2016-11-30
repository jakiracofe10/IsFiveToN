#include <iostream>

using namespace std;

int isFiveToN(int n) {
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