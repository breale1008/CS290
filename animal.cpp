#include <iostream>
#include <string>

/****************
 * AUTHOR: Brian Reale
 * DATE: 4/3/17
 * DESCRIPTION: Reads favoritie animal and prints result to screen
 *
 ***************/

int main()
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal." << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;
 
  return 0;
}
