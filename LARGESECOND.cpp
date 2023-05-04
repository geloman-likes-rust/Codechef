#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> A(N);
    int x = 0, y = 0;
    for (int &a : A) {
      cin >> a;
      if (a > x) {
        y = x;
        x = a;
      } else if (a > y && a != x) {
        y = a;
      }
    }
    cout << x + y << "\n";
  }
  return 0;
}
