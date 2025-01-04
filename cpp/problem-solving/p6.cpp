#include <iostream>
using namespace std;

int ReadNumber()
{
  int Number;
  
  cout << "Enrer Number: " << endl;
  cin >> Number;
  
  return Number;
}

float CalculateTheHalf(int Number)
{
  return float(Number / 2);
}
void PrintResult(int Number){

  string Result = "half of " + to_string(Number) + " is :" + to_string(CalculateTheHalf(Number));
  cout << endl << Result << endl;
}
int main(){

  PrintResult(ReadNumber());
  return  0;

}