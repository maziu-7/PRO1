#include <iostream>
using namespace std;

int main() {
    string prev, next;
    int n, i = 1;
    bool increasing = false;
    while (cin >> n and not increasing) {
        increasing = true;
        cin >> prev;
        for (int c = 2; c <= n; ++c) {
            cin >> next;
            if (next < prev) increasing = false;
            prev = next;
        }
        if (increasing) cout << "The first line in increasing order is " << i << "." << endl;
        ++i;
    }
    if (not increasing) cout << "There is no line in increasing order." << endl;
}