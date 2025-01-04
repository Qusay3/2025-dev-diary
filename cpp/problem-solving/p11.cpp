#include <iostream>
#include <string>

using namespace std;

int ReadNumbers(int& Num1, int& Num2)
{
  cout << "Enter first number: " << endl;
  cin >> Num1;

  cout << "Enter Second number: " << endl;
  cin >> Num2;
  return 0;
}

int MaxOfTwoNumber(int Num1, int Num2)
{
  if (Num1 > Num2)
    return Num1;
  else
    return Num2;
}

void PrintMaxNumber(int max)
{
  cout << max << " is the max number! " << endl;
}

int main()
{

  int Num1, Num2;
  ReadNumbers(Num1, Num2);
  PrintMaxNumber(MaxOfTwoNumber(Num1, Num2));
  
  return  0;

}