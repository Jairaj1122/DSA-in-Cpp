#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

   for (int row = 0; row < size; row++){
     for (int col = 0; col < row+1; col++){
       cout << "*";
    }
     cout << endl;
   }
  
  for (int row = 0; row < size; row++){
    for (int col = 1; col < size-row; col++){
      cout << "*";
  }
         cout << endl;
}
  return 0;
}