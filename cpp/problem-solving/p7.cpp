#include <iostream>
using namespace std;

enum enMark{Pass = 1, Fail = 2};

int ReadMark()
{
  int Mark;
  cout << "Please enter the mark: " << endl;
  cin >> Mark;

  return Mark;
  
}

enMark CheckMark(int Mark)
{
  
  if (Mark >= 50) 
    return enMark::Pass;
  else
    return enMark::Fail;
  
}

void PrintResult(int Mark)
{
  if (CheckMark(Mark) == enMark::Pass )
    cout << "\nYou Passed!\n";
  else
    cout << "\nYou Failed!\n";
}

int main(){

  PrintResult(ReadMark());
  
  
  return  0;

}