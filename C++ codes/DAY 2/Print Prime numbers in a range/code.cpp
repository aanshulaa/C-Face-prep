#include <iostream>
using namespace std;

int main() {
    int n, prime;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        prime = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
  

