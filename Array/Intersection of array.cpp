#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int main() {
   vector<int> arr{1,2,2,4,6,8};
   vector<int> brr{8,9,2,4};

   vector<int>ans;
  
   for (int i = 0; i < arr.size(); i++){
     int element = arr[i];

     for (int j = 0; j < brr.size(); j++){
       if (element == brr[j]){
         //mark
         brr[j] = INT_MIN;
         ans.push_back(element);
       }
     }
   }
   
  //print the Intersection
     for (auto value:ans){
     cout << value << " " ;
     }
      cout << endl;

   return 0;
}