#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X;
    cin >> X;
    int ans = 100 - ((X % 10) < 5 ? X - (X % 10)
                                  : (X % 10 == 0 ? X : X / 10 * 10 + 10));
    cout << ans << "\n";
  }
  return 0;
}
