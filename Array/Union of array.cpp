#include <iostream>
#include <vector>
using namespace std;


int main() {
  int arr[] = {1,2,4,6,8};
  int brr[] = {8,9,2,3};

  int sizearr = 5;
  int sizebrr = 4;

  vector<int>ans;
  for (int i = 0; i < sizearr; i++){
    ans.push_back(arr[i]);
  }

  for (int i = 0; i < sizebrr; i++){
    ans.push_back(brr[i]);
  }

  cout << "Union of array is: ";
  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }

  return 0;
}
