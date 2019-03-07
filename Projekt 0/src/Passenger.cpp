#include "../include/Passenger.h"
#include <math.h>
#define RANDOM_CHANCE 10
using namespace std;

/**
 * @author Maksymilian Malz
 */

 Passenger::Passenger( string station )
 {
     seat = -1;
     isInTrain = false;
     getOff = false;
     startLocation = station;
     if( ( rand() % RANDOM_CHANCE ) < RANDOM_CHANCE - 3 ) {
        hasTicket = true;
     }
     else {
        hasTicket = false;
     }
 }
//**********************************************
void Passenger::getIn( unsigned int seatNumber )
{
    isInTrain = true;
    seat = seatNumber;
};
//*********************************************
void Passenger::whetherGetOff()
{
    if( ( rand() % RANDOM_CHANCE ) < RANDOM_CHANCE - 4 ) {
        getOff = true;
    }
}
