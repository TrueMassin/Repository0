#include <cstdlib>
#include <time.h>
#include <string>
#include <chrono>
#include <thread>
#include <iostream>
#include "../include/Subway.h"
using namespace std;

/**
 * @author Maksymilian Malz
 */

int main()
{
    srand( time( 0 ) );
    string m1[] = {
        "Pole Mokotowskie",
        "Politechnika",
        "Plac Konstytucji",
        "Centrum",
        "Swietokrzyska",
        "Ratusz",
        "Muranow"
    };
    string m2[] = {
        "Rondo Daszynskiego",
        "Rondo ONZ",
        "Swietokrzyska",
        "Nowy Swiat-Uniwersytet",
        "Centrum Nauki Kopernik"
    };
    int sizeM1 = sizeof( m1 ) / sizeof( m1[0] );
    int sizeM2 = sizeof( m2 ) / sizeof( m2[0] );
    Subway subway;
    subway.addTrain( m1, sizeM1 );
    subway.addTrain( m2, sizeM2 );
    do {
        cout << "\033c";
        subway.generatePassengers();
        subway.handlePassengers();
        subway.status();
        subway.moveOn();
        this_thread::sleep_for( chrono::seconds(1) );
    } while( true );
    return 0;
}
