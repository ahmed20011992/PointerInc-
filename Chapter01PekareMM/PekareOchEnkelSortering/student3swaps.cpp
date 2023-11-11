#include "student3swaps.h"
#include "dalgorandom.h"
#include "ragnarstest3.h"

#include <iostream>
using namespace std;

const char* nameOfTheStudent3(){
    return "Ahmed Elhasan";  // Byt ut denna sträng mot ditt eget namn!
}


// ################ Implementera swap med pekar- och referensanrop #################



// ANROP:   swap(a,b); eller swap( (&a), (&b) );
// UPPGIFT: Byter värden mellan a och b.
void swap(float* pA, float* pB){
    // TODO
    float pC= *pA;
    *pA=*pB;
    *pB=pC;
}

// ANROP:   swap(a,b); eller swap((a), (b));
// UPPGIFT: Byter värden mellan a och b.
void swap(float &a, float &b){
    // TODO
    float oldA=a;
    a=b;
    b=oldA;
}

// För att öva på referenser ger jag här en
// lite annorluna implementerting av max.
float& max(float &a, float &b){
    if (a>b)
        return a;
    return b;
}



void testaMax(){
    float a  = 42;
    float b = 108;

    cout << "maximum is " << max(a,b) << endl;

    max(a,b) = 1;

    cout << "a=" << a << " , b=" << b << endl;

    /* OBS! Förklara vad ovanstående max(a,b) = 1 gör, och varför!
     *den fanuktionen ger den största värde av a och b och converterar den till 1.
     *
     */

}


void studentsTest3(){
  // TODO! Skriv din testkod här
  // Testa båda dina swap versioner
    float a=42;
    float b=108;
   cout << max(a,b) << " måste vara svaret 1" << endl;

}



void mainFunctionInStudent3(){

    cout << "\n\n\n################ testingCode3 #################\n\n";

    studentsTest3();
    testaMax();

    ragnarsTest3();
}
