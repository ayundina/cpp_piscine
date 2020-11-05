#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"

void userChoise(int &number, std::string &type);
void startZombieWave(const int &num_zombies, const std::string &type);

#endif