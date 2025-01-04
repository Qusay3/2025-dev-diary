#include <iostream>
using namespace std;

struct stInfo 
{
  int Age;
  bool HasDrivingLicense;
  bool HasRecommendation;
};

stInfo ReadInfo()
{
  stInfo Info;
  cout << "Enter Age: " << endl;
  cin >> Info.Age;

  cout << "Has Driving License: " << endl;
  cin >> Info.HasDrivingLicense;

  cout << "Has Recommendation: ";
  cin >> Info.HasRecommendation;
  
  return Info;
}

bool IsAccepted(stInfo Info)
{

  if (Info.HasRecommendation)
    return  true;
  else
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
  if (IsAccepted(Info))
    
    cout << "\nHired. \n" << endl;
  
  else 
    cout << "\nRejected. \n";
  
}

int main(){

  PrintResult(ReadInfo());
  return  0;

}