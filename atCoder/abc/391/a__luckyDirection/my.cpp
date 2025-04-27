#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string d;
  cin >> d;
  if (d.length() == 1) {
    if (d[0] == 'N') {
      cout << 'S' << endl;
    }
    else if (d[0] == 'E') {
      cout << 'W' << endl;
    }
    else if (d[0] == 'W') {
      cout << 'E' << endl;
    }
    else if (d[0] == 'S') {
      cout << 'N' << endl;
    }
  }
  else {
    if (d == "NE") {
      cout << "SW" << endl;
    } else if (d == "NW") {
      cout << "SE" << endl;
    } else if (d == "SE") {
      cout << "NW" << endl;
    } else if (d == "SW") {
      cout << "NE" << endl;
    }
  }

  return 0;
}