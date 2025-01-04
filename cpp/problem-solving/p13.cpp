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

void SwapNumbers(int& Num1, int& Num2) 
{

  int Temp; 
  
  Temp = Num1; 
  Num1 = Num2; 
  Num2 = Temp; 
  
}

void PrintResult(int Num1, int Num2)
{
  
  cout << "\nNumber1 :  " << Num1 << endl;;
  cout << "Number2 :  " << Num2 << endl;;
}
int main()
{
  int Num1, Num2;
  ReadNumbers(Num1, Num2);
  PrintResult(Num1, Num2);
  SwapNumbers(Num1, Num2);
  PrintResult(Num1, Num2);

  return  0;

}