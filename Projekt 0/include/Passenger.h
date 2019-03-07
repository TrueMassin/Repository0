#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

/**
 * @author Maksymilian Malz
 */

 class Passenger {
        bool hasTicket;
        int seat;
    public:
        bool isInTrain;
        bool getOff;
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
        int getSeatNumber()
        {
            return seat;
        };
 };
#endif // PASSENGER_H
