#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X, Y;
    cin >> X >> Y;
    cout << (Y >= X ? 0 : abs(Y - X)) << "\n";
  }
  return 0;
}
