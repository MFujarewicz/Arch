#include <iostream>

using namespace std;

int main(){
  for (int i = 0; i<16; i++){
    cout << "\e[38;5;" << i << "m" << "WitajŚwiecie" << endl;
  }
  cout <<"\e[0m" << endl; //Resets ASCII to default
  return 0;
}
