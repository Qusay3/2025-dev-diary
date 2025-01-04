#include <iostream>
#include <string>

using namespace std;

int ReadNumbers(int& Num1, int& Num2, int& Num3)
{
  cout << "Enter first number: " << endl;
  cin >> Num1;

  cout << "Enter Second number: " << endl;
  cin >> Num2;

  cout << "Enter Third number: " << endl;
  cin >> Num3;
  
  return 0;
}

int MaxOf3Number(int Num1, int Num2, int Num3)
{
  if (Num1 > Num2)
    
    if ( Num1 > Num3 )
      return Num1;
    else
      return Num3;
    
  else 
    
    if ( Num2 > Num3 )
        return Num2;
      else
        return Num3;
}

void PrintMaxNumber(int max)
{
  cout << max << " is the max number! " << endl;
}

int main()
{

  int Num1, Num2, Num3;
  ReadNumbers(Num1, Num2, Num3);
  PrintMaxNumber(MaxOf3Number(Num1, Num2, Num3));
  
  return  0;

}