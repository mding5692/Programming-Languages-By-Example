#include <iostream>

using namespace std;

int main() {

  // this is an array
  double doubArray = { 32, 45, 67.4, 75.4, 34.5 };

  int i = 0;
  while ( i < 4) {
    
    cout << doubArray[i] << endl;
    
    }

  // this is a vector which is similar to  a stack
  vector<int> numbers(5) // a vector of 5 integers
  // similar to stack's push function
  numbers.push_back(25);
  

}
