#include <iostream>
#include <string>

using namespace std;

void ReadLengthAndWidth(float& Length, float& Width)
{
  cout << "Please enter rectangl length: " << endl;
  cin >> Length;

  cout << "Please enter rectangle width: " << endl;
  cin >> Width;

}

float CalculateRectangleArea(float L, float W) 
{
  return (float) L * W;
}

void PrintRectangleArea(float Area)
{
  
  cout << "\nRectanglr Area is:  " << Area << endl;
}
int main()
{
  float Length, Width;
  ReadLengthAndWidth(Length, Width);
  PrintRectangleArea(CalculateRectangleArea(Length, Width));

  return  0;

}