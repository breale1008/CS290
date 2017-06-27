/**********************
 * AUTHOR: Brian Reale
 * DATE: 4/3/17
 * DESCRIPTION: Prompts user for 5 numbers, displays the average to the screen
 *********************/

#include <iostream>
#include <string>

int main() {
  double num1, num2, num3, num4, num5, avg;

  // user input
  std::cout << "Please enter five numbers." << std::endl;
  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;
  std::cin >> num4;
  std::cin >> num5;
  
  // calculation and output
  avg = (num1 + num2 + num3 + num4 + num5) / 5;
  std::cout << "The average of those numbers is:" << std::endl;
  std::cout << avg << std::endl;

  return 0;
}
