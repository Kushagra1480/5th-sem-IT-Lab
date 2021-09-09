#include<bits/stdc++.h>
using namespace std;

bool isGcdOne(int a, int b) {
    int r;
    while(a % b > 0) {
        r = a % b;
        a = b;
        b = r;
        cout << "a =" << a << "\nb =" << b << "\nr = " << r << "\n--------\n";
    }
    if(b == 1) {
        return true;
    } else {
        return false;
    }
}

int inverse(int a, int m) {
    for(int i = 1; i < m; ++i) {
        if((a * i) % m == 1) {
            return i;
        }
    }
    return 0;
}

int main() {
    int a, m;
    cout << "Enter a and m";
    cin >> a >> m;
    if(isGcdOne(m , a)) {
        cout << "\nThe multiplicative inverse of " << a << " = " << inverse(a, m);
    } else {
        cout << "\nNo multiplicative inverse!";
    }
}