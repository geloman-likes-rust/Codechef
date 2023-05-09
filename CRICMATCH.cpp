#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, M;
    cin >> N >> M;
    cout << (N <= M * 36 ? "YES" : "NO") << "\n";
  }
  return 0;
}
