#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;

   for (int row = 0; row < size; row++){
     for (int stars = 0; stars < 2*size-row-2; stars++){
       cout << "*";
     }
     for (int col = 0; col < row+1; col++){
       cout << row+1;
       if (col != row){
         cout << "*";
       }
     }
    for (int stars = 0; stars < 2*size-row-2; stars++){
      cout << "*";
    }
    cout << endl;
}
  return 0;
}