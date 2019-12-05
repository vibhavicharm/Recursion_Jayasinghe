#include <iostream> 

using namespace std; 

int main(){  
  int i, UserInput, fact = 1;    
  cout << "\nPlease enter a number for factorial: ";    
  cin >> UserInput;    
  
  for(i = 1; i <= UserInput; i++){    
    fact = fact * i;    
  }    
  
  cout << "Factorial of " << UserInput<< " is: " << fact << endl;  
  return 0;  
}  