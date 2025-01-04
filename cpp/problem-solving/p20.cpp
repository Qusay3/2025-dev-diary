#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float ReadCercumference()
{
  float L;
  
  cout << "Please enter Cercumference l : " << endl;
  cin >> L;
  
  return L;

}

float CalculateCircleByCercumference(float L) 
{
  const float PI = 3.1415926535897932384;
  float Area = pow(L, 2 ) * (PI / 4 );
  return Area;
}

void PrintCircleArea(float Area)
{
  
  cout << "\nCircle Area is:  " << Area << endl;
}
int main()
{
 
    PrintCircleArea(CalculateCircleByCercumference(ReadCercumference()));

  return  0;

}