#include <iostream>
#include <string>
using namespace std;


string ReadName()
{
  
  string Name;
  cout << "Enter your name is: " << endl;
  getline(cin, Name);
  return Name;
  
}
void PrintName(string Name){
  
  cout << "Your name is: " << Name << endl;
  
}

int main(){

  PrintName(ReadName());  
  return  0;

}