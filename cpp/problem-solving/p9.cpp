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

float AverageOf3Numbers(int Mark1, int Mark2, int Mark3)
{
  return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}

void PrintAvgResult(int Average)
{
  cout << "\nAverage is: " << Average << endl;
  
}
int main(){

  int Mark1, Mark2, Mark3;

  ReadNumbers(Mark1, Mark2, Mark3);
  //PrintSumResult(SumOf3Numbers(Num1, Num2, Num3));
  PrintAvgResult(AverageOf3Numbers(Mark1, Mark2, Mark3));
  
  
  return  0;

}