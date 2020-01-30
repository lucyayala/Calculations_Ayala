/* Lucy, Ayala, COSC: 1436-57002
  Date 1-28-2020 IDE: Repl.it tool
  This is a program to work with the various arithmetic operators in C++ conditions.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  //Declare and initialize variable
  double number1 = 0.0, number2 = 0.0,
  addition = 0.0, subtraction = 0.0, multiplication = 0.0,
  division = 0.0;

  int number3 = 0, number4 = 0,
  modulus = 0; 

  char exit = 'A';

do 
{
    //Ask the user for each number
    cout << "Please enter:\n " << "Number1: ";
    cin >> number1;
    cout << " Number2: ";
    cin >> number2;
    cout << " Number3: ";
    cin >> number3;
    cout << " Number4: ";
    cin >> number4; 

  if (number4 == 0 || number2 ==0)
  
  { 
    cout <<"Division by 0 is not permitted in math. Please run program again." << endl; 
  }

else 
   //Display arithmetic results
 {

 //Calculate arithmetic operators
  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2;
  division = number1 / number2;
  modulus =(number3) % number4;

  cout << "These are your results when you " << endl;
  cout <<"Add Number1 and Number2: " << addition << endl;
  cout << "Subtract Number1 and Number2: " << subtraction << endl;
  cout << "Multiply Number1 and Number2: " << multiplication << endl;
  cout << "Divide Number1 and Number2: " << division <<endl;
  cout << "Modulus Number3 and Number4: " << modulus << endl;

  cout << "To exit the program please enter A otherwise enter any other letter to restart the program" << endl;
  cin >> exit;
 }
}while (exit != 'A');
    
 return 0;
}

