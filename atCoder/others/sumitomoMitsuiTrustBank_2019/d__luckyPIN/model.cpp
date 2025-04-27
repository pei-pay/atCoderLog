#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0; // Initialize the count of valid PINs to 0

  // Iterate over all possible 3-digit PINs (000 to 999)
  rep(i, 1000) {
    string t; // Current PIN as a string
    int x = i; // Current PIN as an integer
    // Convert the integer PIN to a string
    rep(j, 3) {
      t += '0' + x % 10; // Get the last digit of x and add it to t
      x /= 10; // Remove the last digit from x
    }
    int ti = 0; // Index for the current digit of the PIN
    // Check if the current PIN can be found in the input string
    rep(j, n) {
      if (s[j] == t[ti]) { // If the current character matches the current digit of the PIN
        ++ti; // Move to the next digit of the PIN
        if (ti == 3) { // If all 3 digits of the PIN are found
          break; // Exit the loop
        }
      }
    }
    if (ti == 3) { // If the current PIN is found in the input string
      ans++; // Increment the count of valid PINs
    }
  }

  cout << ans << endl;
  return 0;
}