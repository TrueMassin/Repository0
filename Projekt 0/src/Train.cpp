#include <iostream>
#include "../include/Train.h"

using namespace std;
/**
 * @author Maksymilian Malz
 */

 Train::Train( string stationsList[], unsigned int tableSize )
 {
    stations = stationsList;
    numberOfStations = tableSize;
    actualStation = 1;
    direction = true;
    for( int i = 0; i < NUMBER_OF_SEATS; ++i ) {
        seats[i] = nullptr;
    }
    busySeats = 0;
 }
 //*********************************************
 void Train::goToNextStation()
 {
     if( actualStation == numberOfStations ) {
        direction = false;
     }
     else if( actualStation == 1 ) {
        direction = true;
     }

     if( direction ) {
        ++actualStation;
     }
     else {
        --actualStation;
     }
 }
//*********************************************
void Train::getInformation()
{
    cout << "Stacja - " << stations[ actualStation - 1 ] << endl << "Wypelnienie - " << busySeats * 100 / NUMBER_OF_SEATS << "%" << endl;
}
//*********************************************
void Train::lastStation()
{
    for( int i = busySeats - 1; i >= 0; --i ) {
        this->passengerGetOff( i );
        --busySeats;
    }
}
//*********************************************
void Train::passengerGetIn( Passenger* newPassenger )
{
    if( busySeats < NUMBER_OF_SEATS ) {
        seats[ busySeats ] = newPassenger;
        ++busySeats;
    }
}
void Train::passengerGetOff( unsigned int seatNumber )
{
    --busySeats;
    if( seatNumber == busySeats ) {
        seats[ seatNumber ] = nullptr;
    }
    else {
        seats[ busySeats ]->newSeat( seatNumber );
        seats[ seatNumber ] = seats[ busySeats ];
        seats[ busySeats ] = nullptr;
    }
}
