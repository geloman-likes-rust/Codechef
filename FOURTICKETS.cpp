#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int X;
    cin >> X;
    cout << (X * 4 <= 1000 ? "YES" : "NO") << "\n";
  }
}
