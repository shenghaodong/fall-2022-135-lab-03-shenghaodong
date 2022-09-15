// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"

int main()
{
  std::string date = "05/20/2018";
  std::cout << "Enter Date: " << date << std::endl;
  std::cout << "East Basin Storage: " << get_east_storage(date) << " billion gallons" << std::endl;
  std::cout << "minumum storage in East basin: " << get_min_east() << std::endl;
  std::cout << "MAXiumum storage in East Basin: " << get_max_east() << std::endl;
  std::cout << compare_basins(date) << std::endl;
  return 0;
}