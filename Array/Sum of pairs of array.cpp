#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> arr{1,2,4,6,8};
  int sum = 6;
  //Print all pairs
  //outer loop will traverse for each element
  for (int i = 0; i < arr.size(); i++){
    int element = arr[i];

    //inner loop will traverse on next value
  for (int j = i+1; j < arr.size(); j++){
   if (element+arr[j] == sum){
    cout << "Pair " << element << ","<< arr[j] << endl;
    }
  }
}
  
   return 0;
}