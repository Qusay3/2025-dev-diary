#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float ReadDiameter()
{
  float D;
  
  cout << "Please enter radius D: " << endl;
  cin >> D;
  
  return D;

}

float CalculateCircleAreaByDiameter(float D) 
{
  const float PI = 3.1415926535897932384;
  float Area = ( PI* pow(D, 2 ) ) / 4 ;
  return Area;
}

void PrintCircleArea(float Area)
{
  
  cout << "\nCircle Area is:  " << Area << endl;
}
int main()
{
 
  PrintCircleArea(CalculateCircleAreaByDiameter(ReadDiameter()));

  return  0;

}