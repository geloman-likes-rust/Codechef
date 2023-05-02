// https://www.codechef.com/problems/ON_OFF
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    bool is_on = true;
    int N;
    cin >> N;
    vector<char> S(N);
    vector<char> R(N);
    for (char &s : S)
      cin >> s;
    for (char &r : R)
      cin >> r;
    for (int i = 0; i < N; ++i) {
      if (R[i] == S[i])
        continue;
      is_on = !is_on;
    }
    cout << (is_on ? 1 : 0) << "\n";
  }
  return 0;
}
