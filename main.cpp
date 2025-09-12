// Assignment 1 - Fuel Range
// Aiden Maltese
#include <iostream>
using namespace std;

int main() {
  // TODO: Declare your variables, with comments for each
  double mpg;
  double maxFill;
  double percentFilled;
  double milesLeft;
  // TODO: Prompt for and input the required values
  
  cout << "How many gallons can the gas tank hold? ";
  cin >> maxFill;
  cout << "Whats the MPG of the vehicle? ";
  cin >> mpg;
  cout << "What percent is the tank filled? ";
  cin >> percentFilled;


  milesLeft = (maxFill*mpg)*(percentFilled/100);

  cout << "The vehicle can be driven " << milesLeft << " miles on the remaining fuel." << endl;



  // TODO: Calculate the results

  // TODO: Output the results
  
}
