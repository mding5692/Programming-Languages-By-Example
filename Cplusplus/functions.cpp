#include <iostream>

using namespace std;

/** function taking integers as parameters and returns an integer as well */
int multiplyNum(int num1, int num2) {
  int result = num1 * num2;
  return result;
}

/** void functions don't return anything */
void voidFunc() {
  
  cout << "this does something" << endl;
  
}

int main() {
  
  int i = 2;
  int j = 3;
  int answer = multiplyNum(i, j);
  
  return 0;
}
