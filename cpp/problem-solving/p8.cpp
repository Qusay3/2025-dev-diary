#include <iostream>
using namespace std;


int ReadNumbers(int& Num1, int& Num2, int& Num3)
{

  cout << "Enter first mark: " << endl;
  cin >> Num1;

  cout << "Enter second mark: " << endl;
  cin >> Num2;

  cout << "Enter third mark: " << endl;
  cin >> Num3;

  return 0;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
  return  Num1 + Num2 + Num3;
}

void PrintSumResult(int Total)
{
  cout << "\nTotal is: " << Total << endl;
  
}
int main(){

  int Num1, Num2, Num3;

  ReadNumbers(Num1, Num2, Num3);
  PrintSumResult(SumOf3Numbers(Num1, Num2, Num3));
  
  
  return  0;

}