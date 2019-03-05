#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

/**
 * @author Maksymilian Malz
 */

 class Passenger {
        bool isInTrain;
        std::string location;
        bool hasTicket;
    public:
        Passenger( std::string station );
        void whetherGetOff();
        void getOff();
 };
#endif // PASSENGER_H
