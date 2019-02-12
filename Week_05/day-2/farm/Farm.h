//
// Created by NEMETH on 2019.02.12..
//

#ifndef FARM_FARM_H
#define FARM_FARM_H

#include <vector>
#include "Animal.h"

class Farm
{
public:
    Farm(int numSlots);
    void breed();
    int sizeOfAnimalVector();

private:
    std::vector<Animal> _animals;
    int _numSlots;
};

#endif //FARM_FARM_H
