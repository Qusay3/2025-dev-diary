#include <iostream>
#include <string>

using namespace std;

enum enPassFail {Passed = 1, Failed = 2 };

int ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{

  cout << "Enter first mark: " << endl;
  cin >> Mark1;

  cout << "Enter second mark: " << endl;
  cin >> Mark2;

  cout << "Enter third mark: " << endl;
  cin >> Mark3;

  return 0;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
  return  Mark1 + Mark2 + Mark3;
}

float AverageOf3Numbers(int Mark1, int Mark2, int Mark3)
{
  return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
  if (Average >= 50)
    return enPassFail::Passed;
  else
    return  enPassFail::Failed;
}

void PrintAvgResult(float Average)
{
  cout << "\nAverage is: " << Average << endl;

  if (CheckAverage(Average) == enPassFail::Passed)
    
    cout << "\nYou Passed! " << endl;
  else
    cout << "\nYou Failed! " << endl;
  
}
int main(){

  int Mark1, Mark2, Mark3;

  ReadNumbers(Mark1, Mark2, Mark3);
  //PrintSumResult(SumOf3Numbers(Num1, Num2, Num3));
  PrintAvgResult(AverageOf3Numbers(Mark1, Mark2, Mark3));
  
  
  return  0;

}