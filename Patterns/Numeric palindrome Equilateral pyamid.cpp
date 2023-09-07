#include <iostream>
using namespace std;

int main() {
      int size;
  cin >> size;

  for (int row = 0; row < size; row++){
    for (int spaces = 0; spaces < size-row-1; spaces++){
      cout << " ";
    }
    for (int col = 0; col < row+1; col++){
      cout << col+1;
  }
    for (int revcol = row; revcol >= 1; revcol--){
      cout << revcol;
    }
    cout << endl;
}
  return 0;
}