// https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    // Edge | If a is already multiple
    if (a % c == 0) {
        cout << a;
        return 0;
    }
    // Identify next smallest multiple
    int nextMult = a - (a % c) + c;
    // Check if within range
    if (nextMult <= b) {
        cout << nextMult;
    }
    else {
        cout << -1;
    }

    return 0;
}