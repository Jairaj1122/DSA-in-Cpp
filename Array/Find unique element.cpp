#include <iostream>
#include <vector>
using namespace std;


int FindNum (vector<int>arr){
  int ans = 0;
  for (int i = 0; i < arr.size(); i++){
    ans = ans^arr[i];
  }
  return ans;
}
int main() {
  int n;
  cout << "Enter the value: " << endl;
  cin >> n;

  vector<int>arr(n);
  cout << "Enter the elements: ";
  for (int i = 0; i < arr.size(); i++){
    cin >> arr[i];
  }

  int UniqueNum = FindNum(arr);

  cout << "Unique value is: "<< UniqueNum << endl;

  return 0;
}