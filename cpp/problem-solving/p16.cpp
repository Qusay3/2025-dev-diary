#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void ReadNumbers(float& A, float& H)
{
  cout << "Please enter triangle length: " << endl;
  cin >> A;

  cout << "Please enter triangle width: " << endl;
  cin >> H;

}

float CalculateTriangleArea(float A, float H) 
{
  float Area = (A / 2) * H;
  return Area;
}

void PrintTriangleArea(float Area)
{
  
  cout << "\nTriangle Area is:  " << Area << endl;
}
int main()
{
  float A, H;
  ReadNumbers(A, H);
  PrintTriangleArea(CalculateTriangleArea(A, H));

  return  0;

}