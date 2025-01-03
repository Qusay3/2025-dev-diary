#include <iostream>
using namespace std;



int main(){
  
  int arr[10] = {10,34,54,24,66,75,45,68,11,50};
  
  for (int i = 0; i <=10 ; i++){ 
    int MagicNum = 24;
    cout << "Iteration: " << i << endl;
    
    if (MagicNum == arr[i]){
      
      cout << "found in position: " << i << endl;
      break;  // comment , un comment
      
    }
  }
return 0;
}