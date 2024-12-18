#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

#include <iostream>

namespace seneca {

    class MotorVehicle {
        char licensePlate[9];
        char address[64];
        int year;

    public:
        MotorVehicle(const char* plate, int yearBuilt);

        void moveTo(const char* newAddress);
        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& in);
    };

    std::ostream& operator<<(std::ostream& os, const MotorVehicle& mv);
    std::istream& operator>>(std::istream& is, MotorVehicle& mv);

}

#endif
