//
// Created by Willie Macharia on 2025/02/10.
//
#include <iostream>
#ifndef TESTING9_CAR_H
#define TESTING9_CAR_H

class Car {
public:
    std::string model;
    std::string make;
    double engineCapacity;
    double amountOfFuel;

    void driveCar(int numOfHours);

};


#endif //TESTING9_CAR_H
