#include <iostream>
using namespace std;

void prime(int a){
  bool arr[2* a+ 2];
  for (int b= 0; b<= 2* a; b++)
  arr[b]= true;
  for (int b= 2; b* b<= 2* a; b++){
    if (arr[b]== true){
      for (int c= b* b; j<= 2* a; j+= b)
      arr[j]= false;
    }
  }
  cout << "The first prime numnber between "<< a<< " and "<< 2* a<< " is: ";
  for (int b= a; b<= 2* a; b++)
  if (arr[b]){
    cout<< b;
    break;
  }
}
int main(){
  cout<< "Enter a starting number: ";
  int a;
  cin>> a;
  prime(a);
}