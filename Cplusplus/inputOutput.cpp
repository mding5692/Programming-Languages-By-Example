// you've seen the cout method, now for cin

#include <iostream>

using namespace std; // boilerplate code = aka stuff that you always have to type out

int main() {

  int inputNum = 0;
  // takes in input and stores into inputNum
  cin >> inputNum;
  
  if ( inputNum != 0 ) {
    // inputNum is turned into output
    cout << inputNum;
  
  }

}
