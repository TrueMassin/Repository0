#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include "Passenger.h"
#define NUMBER_OF_SEATS 100

/**
 * @author Maksymilian Malz
 */

 class Train {
        unsigned int numberOfStations;
        unsigned int actualStation;
        bool direction;
        std::string* stations;
        Passenger* seats[ NUMBER_OF_SEATS ];
        unsigned int busySeats;
    public:
        Train( std::string stationsList[], unsigned int tableSize );
        void goToNextStation();
        void getInformation();
        std::string getLocation()
        {
            return stations[ actualStation - 1 ];
        };
        int getSeatNumber();
        void lastStation();
        void passengerGetIn( Passenger* newPassenger );
        void passengerGetOff( unsigned int seatNumber );
        bool comparePassengers( unsigned int firstCompare, Passenger* secondCompare );
 };
#endif // TRAIN_H
