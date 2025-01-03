#include <iostream>
using namespace std;
/*
int ReadIntNumberInRangeUsingWhile(int From, int To){

  int number;
  cout << "enter a number between " << From << " and " << To << endl;
  cin >> number;
  
  while ( number < From || number > To){
    cout << "out of range, please a number between: "<< From << " and " << To << endl;
    cin >> number;
  } 

  cout << "The number is: " <<  number << endl;
  return number;
*/
int ReadIntInRangeUsingDoWhile(int From, int To){
  int number;
  do {
    cout << "Enter number between " << From << " and " << To << endl;
    cin >> number;
    
  } while ( number < From || number > To);
  return number;

}

int main(){

  // ReadIntNumberInRangeUsingWhile(1, 10);
  cout << "you entered: " << ReadIntInRangeUsingDoWhile(18, 45) << endl;
  return 0;
}
