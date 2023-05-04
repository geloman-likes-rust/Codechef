#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, M;
    cin >> N >> M;
    cout << ((N - N * 0.1) == M ? "EITHER"
                                : ((N - N * 0.1) > M ? "DINING" : "ONLINE"))
         << "\n";
  }
  return 0;
}
