#include "../include/Passenger.h"
#include <math.h>
#define RANDOM_CHANCE 10
using namespace std;

/**
 * @author Maksymilian Malz
 */

 Passenger::Passenger( string station )
 {
     isInTrain = false;
     location = station;
     if( ( rand() % RANDOM_CHANCE ) < RANDOM_CHANCE - 3 ) {
        hasTicket = true;
     }
     else {
        hasTicket = false;
     }
 }
//**********************************************
