#ifndef SUBWAY_H
#define SUBWAY_H
#include <string>
#include "Train.h"
#include "Passenger.h"
#define NUMBER_OF_TRAINS 2
#define NUMBER_OF_PASSENGERS 200
#define NUMBER_OF_STATIONS 20

/**
 * @author Maksymilian Malz
 */

 class Subway {
        std::string stations[ NUMBER_OF_STATIONS ];
        unsigned int stationsNumber;
        Passenger* passenger[ NUMBER_OF_PASSENGERS ];
        Train* train[ NUMBER_OF_TRAINS ];
        unsigned int numberOfTrains;
        unsigned int numberOfPassengers;
        unsigned int respawnSpeed;
    public:
        Subway( unsigned int respSpeed = 50 );
        void addTrain( std::string stationsList[], unsigned int tableSize );
        void addPassenger( std::string station );
        void status();
        void moveOn();
        void generatePassengers();
        void handlePassengers();
 };
#endif // SUBWAY_H
