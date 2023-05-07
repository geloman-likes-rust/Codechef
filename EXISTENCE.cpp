#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long X, Y;
    cin >> X >> Y;
    cout << ((X * X * X * X) + 4 * (Y * Y) == 4 * (X * X) * Y ? "YES" : "NO")
         << "\n";
  }
  return 0;
}
