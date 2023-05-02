#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X, Y, A;
    cin >> X >> Y >> A;
    cout << (A >= X && A < Y ? "YES" : "NO") << "\n";
  }
  return 0;
}
