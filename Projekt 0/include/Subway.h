#ifndef SUBWAY_H
#define SUBWAY_H
#include <string>
#include "Train.h"
#include "Passenger.h"
#define NUMBER_OF_TRAINS 2
#define NUMBER_OF_PASSENGERS 100

/**
 * @author Maksymilian Malz
 */

 class Subway {
        Passenger* passenger[ NUMBER_OF_PASSENGERS ];
        Train* train[ NUMBER_OF_TRAINS ];
        unsigned int numberOfTrains;
        unsigned int numberOfPassengers;
    public:
        Subway();
        void addTrain( std::string stationsList[], unsigned int tableSize );
        void addPasenger( std::string station );
        void status();
 };
#endif // SUBWAY_H
