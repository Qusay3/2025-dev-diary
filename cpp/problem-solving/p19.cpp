#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float ReadSquareSide()
{
  float A;
  
  cout << "Please enter square side A : " << endl;
  cin >> A;
  
  return A;

}

float CalculateCircleInsribedInSquare(float A) 
{
  const float PI = 3.1415926535897932384;
  float Area = ( PI* pow(A, 2 ) ) / 4 ;
  return Area;
}

void PrintCircleArea(float Area)
{
  
  cout << "\nCircle Area is:  " << Area << endl;
}
int main()
{
 
  PrintCircleArea(CalculateCircleInsribedInSquare(ReadSquareSide()));

  return  0;

}