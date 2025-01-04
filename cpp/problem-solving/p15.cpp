#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void ReadLengthAndWidth(float& SideArea, float& Diagonal)
{
  cout << "Please enter rectangle length: " << endl;
  cin >> SideArea;

  cout << "Please enter rectangle width: " << endl;
  cin >> Diagonal;

}

float RectangleAreaBySideAndDiagonal(float A, float D) 
{
  float Area = A * sqrt((pow(D, 2)) - pow(A, 2));
  return Area;
}

void PrintRectangleArea(float Area)
{
  
  cout << "\nRectangle Area is:  " << Area << endl;
}
int main()
{
  float Length, Width;
  ReadLengthAndWidth(Length, Width);
  PrintRectangleArea(RectangleAreaBySideAndDiagonal(Length, Width));

  return  0;

}