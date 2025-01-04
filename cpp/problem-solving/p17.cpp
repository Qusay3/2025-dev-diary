#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float ReadRadius()
{
  float Radius;
  
  cout << "Please enter circle Radius length: " << endl;
  cin >> Radius;
  
  return Radius;

}

float CalculateCircleArea(float Raduis) 
{
  const float PI = 3.1415926535897932384;
  float Area = PI * pow(Raduis, 2 );
  return Area;
}

void PrintCircleArea(float Area)
{
  
  cout << "\nCircle Area is:  " << Area << endl;
}
int main()
{
 
  PrintCircleArea(CalculateCircleArea(ReadRadius()));

  return  0;

}