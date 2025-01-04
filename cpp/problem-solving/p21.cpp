#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float ReadTriangleData(float& A, float& B)
{
  
  cout << "Please enter triangle side A : " << endl;
  cin >> A;
  
  cout << "Please enter triangle side B : " << endl;
  cin >> B;

  return 0;
}

float CalculateAreaByTriangle(float A, float B) 
{
  const float PI = 3.1415926535897932384;
  float Area = PI * ( pow ( B, 2 ) / 4 ) * ((2 * A - B) / (2 * A + B));
  return Area; 
}

void PrintArea(float Area)
{
  
  cout << "\nCircle Area is:  " << Area << endl;
}
int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintArea(CalculateAreaByTriangle(A, B));

  return  0;

}