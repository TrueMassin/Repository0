#include <iostream>
#include "../include/Subway.h"
using namespace std;

/**
 * @author Maksymilian Malz
 */

 Subway::Subway()
 {
    for( int i = 0; i < NUMBER_OF_TRAINS; ++i ) {
        train[i] = nullptr;
    }
    for( int i = 0; i < NUMBER_OF_PASSENGERS; ++i ) {
        passenger[i] = nullptr;
    }
    numberOfTrains = 0;
    numberOfPassengers = 0;
 }
 //******************************************
 void Subway::addTrain( string stationsList[], unsigned int tableSize )
 {
     if( numberOfTrains < NUMBER_OF_TRAINS ) {
        train[ numberOfTrains ] = new Train( stationsList, tableSize );
        ++numberOfTrains;
     }
 }
//********************************************
void Subway::addPasenger( string station )
{
    if( numberOfPassengers < NUMBER_OF_PASSENGERS ) {
        passenger[ numberOfPassengers ] = new Passenger( station );
        ++numberOfPassengers;
    }
}
//*******************************************
void Subway::status()
{
    for( int i = 0; i < static_cast<int>(numberOfTrains); ++i) {
        cout << "Pociag " << i + 1 << ":" << endl;
        train[i]->getInformation();
        cout << endl << endl;
    }
}
