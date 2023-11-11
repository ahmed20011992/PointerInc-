#include "student4thoughtreading.h"
#include "ragnarstest4.h"

#include <iostream>
using namespace std;




// ################ MAGI! Förklara hur tankeläsningen fungerar! #################

void tankPaEttTal(){
    int x = 108;
    cout <<  "Denna funktion tanker pa ett hemligt tal" << endl;

}

void tankelasning(){
    int  hemligheten;
    cout <<  "Denna funktion tror att den andra funktionens hemlighet ar " << hemligheten << endl;
}

void experimentMedTankeoverforing(){
    cout << "Experiment med tankeoverforing!\n";
    cout << "(studera utskrifterna sa att du kan forklara dem i kommentaren)\n\n";
    tankPaEttTal();
    tankelasning();


    /* TODO
       Förklaring:
       den variblen hemligheten får samma adress för varirablen som sist använt.
       en ice definerat varialblen får samma adress som sista variablen i stacken när en tidigare funtion har krympat.




     */
}




void mainFunctionInStudent4(){

    cout << "\n\n\n################ testingCode4 #################\n\n";

    experimentMedTankeoverforing();

    ragnarsTest4();
}

