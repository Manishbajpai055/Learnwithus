#include <iostream>
using namespace std;
#define FOR(i, n) for (int i = 1; i <= n; i++)

int main () {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    // for (int i = 1; i <= 10; i++)
    FOR(i, 10) {
        cout << (i * a) << endl;
    }
    // return 0;
}
