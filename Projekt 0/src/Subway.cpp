#include <iostream>
#include "../include/Subway.h"
using namespace std;

/**
 * @author Maksymilian Malz
 */

 Subway::Subway( unsigned int respSpeed )
 {
    for( int i = 0; i < NUMBER_OF_TRAINS; ++i ) {
        train[i] = nullptr;
    }
    for( int i = 0; i < NUMBER_OF_PASSENGERS; ++i ) {
        passenger[i] = nullptr;
    }
    numberOfTrains = 0;
    numberOfPassengers = 0;
    respawnSpeed = respSpeed;
//DO POPRAWY@@@@@@@@@@@@@@@
stations[0] = "Pole Mokotowskie";
stations[1] = "Politechnika";
stations[2] = "Plac Konstytucji";
stations[3] = "Centrum";
stations[4] = "Ratusz";
stations[5] = "Muranow";
stations[6] = "Rondo Daszynskiego";
stations[7] = "Rondo ONZ";
stations[8] = "Swietokrzyska";
stations[9] = "Nowy Swiat-Uniwersytet";
stations[10] = "Centrum Nauki Kopernik";
stationsNumber = 11;
//@@@@@@@@@@@@@@@@@@@@@@@@@
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
    for( int i = 0; i < static_cast<int>( numberOfTrains ); ++i) {
        cout << "Pociag " << i + 1 << ":" << endl;
        train[i]->getInformation();
        cout << endl << endl;
    }
}
//*****************************************
void Subway::moveOn()
{
    for( unsigned int i = 0; i < numberOfTrains ; ++i ) {
        train[i]->goToNextStation();
    }
}
//******************************************
void Subway::generatePassengers()
{
    unsigned int x;
    for( unsigned int i = 0; i < respawnSpeed ; ++i ) {
        x = rand() % stationsNumber;
        addPasenger( stations[x] );
    }
}
