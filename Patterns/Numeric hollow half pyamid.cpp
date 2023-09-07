#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;

  for (int row = 0; row < size; row++){
    for (int col = 0; col < row+1; col++){
      if (col == 0 || row == size-1 || row == col){
      cout << col+1;
      }
      else{
        cout << " ";
      }
    }
  return 0;
}
}