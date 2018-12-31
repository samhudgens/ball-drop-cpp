#include <iostream>
#include "constants.h"

double distanceFallen(int secondsElapsed) {
  double distance;
  distance = constants::gravity * ((secondsElapsed * secondsElapsed)) / 2;
  return distance;
}

void printHeightFromGround(int secondsElapsed, double height0) {
  double height = height0 - distanceFallen(secondsElapsed);
  if (height > 0.0) {
    std::cout << "At " << secondsElapsed << " seconds, the ball is at height: " << height << " meters\n";
  } else {
    std::cout << "At " << secondsElapsed << " seconds, the ball is on the ground\n";
  }
}
