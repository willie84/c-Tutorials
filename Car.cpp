//
// Created by Willie Macharia on 2025/02/10.
//

#include "Car.h"

int main(){

    Car car1; // name of this object if car1
    Car car2; // name of this object if car2
    Car car3; // name of this object if car3

    car1.make = "Mazda";
    car1.model = "CX5";
    car1.amountOfFuel=60.0;
    car1.engineCapacity=7.5;

    car2.make = "Toyota";
    car2.model = "Prado";
    car2.amountOfFuel = 70.0;


    car3.make = "Volkswagen";
    car3.model = "Polo GTI";
    car3.amountOfFuel = 80.0;


// PRINT THE OBJECTS

 std::cout << "Car Number 1 is " << car1.make << " " << car1.model << " " << car1.amountOfFuel<< std::endl;
    std::cout << "Car Number 2 is " << car2.make << " " << car2.model << " " << car2.amountOfFuel<< std::endl;
    std::cout << "Car Number 3 is " << car3.make << " " << car3.model << " " << car3.amountOfFuel<< std::endl;

    car1.driveCar(2);

    std::cout << "Car Number 1 is " << car1.make << " " << car1.model << " " << car1.amountOfFuel<< std::endl;


}

void Car::driveCar(int numofhours) {
    amountOfFuel = amountOfFuel - engineCapacity*numofhours;
}
