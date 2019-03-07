#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

/**
 * @author Maksymilian Malz
 */

 class Passenger {
        bool isInTrain;
        bool hasTicket;
        bool getOff;
        int seat;
    public:
        std::string startLocation;
        Passenger( std::string station );
        void getIn( unsigned int seatNumber );
        void whetherGetOff();
        void setGetOff()
        {
            getOff = true;
        };
        void newSeat( unsigned int number )
        {
            seat = number;
        };
 };
#endif // PASSENGER_H
