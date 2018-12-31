#include <iostream>
#include "ballphysics.h"

int main() {
  std::cout << "Choose the height of the building that the ball will be dropped from: " << std::endl;
  double height0;
  std::cin >> height0;

  printHeightFromGround(0, height0);
  printHeightFromGround(1, height0);
  printHeightFromGround(2, height0);
  printHeightFromGround(3, height0);
  printHeightFromGround(4, height0);
  printHeightFromGround(5, height0);

  return 0;
}