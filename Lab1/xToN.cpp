// Yiwei He yh9vhg 8/30/2021 xToN.cpp

#include <iostream>
using namespace std;

int xton (int a, int b) {
    if (b == 1) {
        return a;
    }
    else if (b == 0) {
        return 1;
    }
    else {
        return a * xton(a, b-1);
    }
}

int main () {
    int x, y, z;
    cin >> x;
    cin >> y;
    z = xton (x, y);
    cout << z << endl;
    return 0;
}