#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X;
    cin >> X;
    cout << (X > 30 ? "YES" : "NO") << "\n";
  }
  return 0;
}
