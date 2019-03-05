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
