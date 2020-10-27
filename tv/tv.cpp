#include <iostream>
#include "tv.h"
#include <sstream>
#include <string>

using namespace std;

void TV::aumentarVolume(){
    if(volume < V_MAX)
        volume++;
}

void TV::diminuirVolume(){
    if(volume > V_MIN)
        volume--;
}