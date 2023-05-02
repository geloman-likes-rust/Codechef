#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X, Y;
    cin >> X >> Y;
    int ans = X * 10 + Y * 90;
    cout << ans << "\n";
  }
  return 0;
}
