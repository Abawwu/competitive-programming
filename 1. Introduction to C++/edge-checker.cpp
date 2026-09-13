// https://atcoder.jp/contests/abc240/tasks/abc240_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    if (abs(a%10 - b%10) == 1 || abs(a%10 - b%10) == 9) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}