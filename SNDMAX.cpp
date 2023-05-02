#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  while (N--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c) {
      cout << (b > c ? b : c);
    } else if (b > a && b > c) {
      cout << (a > c ? a : c);
    } else {
      cout << (b > a ? b : a);
    }
    cout << "\n";
  }
  return 0;
}
