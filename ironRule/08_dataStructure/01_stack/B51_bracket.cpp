#include <iostream>
#include <stack>
using namespace std;


string S;
stack<int> Stack;

int main() {
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '(') {
      Stack.push(i + 1);
    }
    if (S[i] == ')') {
      cout << Stack.top() << " " << i + 1 << endl;
      Stack.pop();
    }
  }

  return 0;
}