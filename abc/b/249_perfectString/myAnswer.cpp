#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S.length() > 52) {
    cout << "No" << endl;
    return 0;
  }

  bool includeBig, includeSmall = false;
  bool unique = true;
  for (int i = 0; i < S.length(); i++) {
    if ((S[i] >= 'a') && (S[i] <= 'z')) {
      includeSmall = true;
    }

    if ((S[i] >= 'A') && (S[i] <= 'Z')) {
      includeBig = true;
    }

    if (i == S.length() - 1) {
      break;
    }

    for (int j = i + 1; j < S.length(); j++) {
      if (S[i] == S[j]) {
        unique = false;
      }
    }
  }

  if (includeBig && includeSmall && unique) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}