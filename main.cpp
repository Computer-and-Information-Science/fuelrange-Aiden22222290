// Assignment 1 - Fuel Range
// Aiden Maltese
#include <iostream>
using namespace std;

int main() {
  // TODO: Declare your variables, with comments for each
  double mpg = 30.77;
  double gallons = 4.87;
  double maxFill = 18;
  double percentFilled = (gallons/maxFill)*100;
  double milesLeft;
  // TODO: Prompt for and input the required values

  milesLeft = gallons*mpg;

  cout << "The vehicle can be driven " << milesLeft << " miles on the remaining fuel." << endl;
  cout << "The vehicle has " << percentFilled << "% of the tank filled.";




  // TODO: Calculate the results

  // TODO: Output the results
  
}
