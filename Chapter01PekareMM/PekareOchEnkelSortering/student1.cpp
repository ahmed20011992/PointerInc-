#include "student1.h"
#include <cassert>
#include "ragnarstest1.h"

#include <iostream>
using namespace std;


// Läs Detta!

// Pekaruppdragen går ut på att implementera nedastående funktioner
// Många funktioner skall implementeras på två olika sätt (I och P):
// Version I: Räkna ut size och använd arraynotation med hakparanteser och heltalsindex.
// Version P: Använd istället pekarnotation, dvs  *p,  p+=1,  etc.




// ************************************************************
// ANROP:   char* namn = nameOfStudent1();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent1(){
    return "Ahmed El hasan";  // Byt ut denna sträng mot ditt eget namn!
}




// ################ version I, löses med [ ]  och indexnotation #############



// ************************************************************
// ANROP:   float value = minimumI(&arr[0], &arr[size]);
// UPPGIFT: Returnerar arrayens minsta värde
// ************************************************************
float minimumI(const float *pBegin, const float *pEnd){
    //0,12,3,34,1

    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    float extreme = pBegin[0];
    for (int i=0; i<size ; i+=1){
        if (pBegin[i]<extreme)
            extreme = pBegin[i];}
    return extreme;
}


// ************************************************************
// ANROP:   float value = maximumI( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens största värde
// ************************************************************
float maximumI(const float *pBegin, const float *pEnd){

    // TODO
    assert (pBegin < pEnd);
    int size= pEnd - pBegin;
    float b= pBegin[0];
    for(int i=0; i< size; i++){
        if (pBegin[i]>b)
            b=pBegin[i];


    }

    return b; // felaktig kodrad
}


// ************************************************************
// ANROP:   float value = sumI( &arr[0], &arr[size] );
// UPPGIFT: Returnerar summan av alla element.
// ************************************************************
float sumI(const float *pBegin, const float *pEnd){

    // TODO
    float sum=0;
    int size = pEnd-pBegin ;

    for(int i=0; i<size ;i++){
        sum += pBegin[i] ;

    }

    return sum; // felaktig kodrad



}
// ************************************************************
// ANROP:   fillRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med oberoende slumpdata
// ************************************************************
void fillRandomI(float *pBegin, float *pEnd){
    // TODO

    int size= pEnd - pBegin;

    for (int i=0;i<size;i++){
        pBegin[i]=(rand()%10+1);


    }



}

// ************************************************************
// ANROP:   fillSortedRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med sorterat slumpdata. Minst först
// ************************************************************

void fillSortedRandomI(float *pBegin, float *pEnd){
    int size= pEnd-pBegin;
    pBegin[0]=rand()%10+1;
    for(int i = 1; i<size ; i++){
        pBegin[i]=pBegin[i-1]+rand()%10+1;
    }
    *pBegin=rand()%10+1;
    for (float *px=(pBegin+1); px != pEnd; px++){
        *px=*(px-1)+rand()%10+1;
    }

}

// ************************************************************
// ANROP:   bool contains = hasValueInRangeI(min, max, &arr[0], &arr[size] );
// UPPGIFT: Returnerar true om arrayen ett värde i det halvt öppna intervallet min <= x < max.
// ************************************************************
bool  hasValueInRangeI(float min, float max, const float *pBegin, const float *pEnd){
    // TODO
    int size=pEnd-pBegin;
    for (int i=0;i<size;i++) {
        if (pBegin[i]>= min && pBegin[i]< max){
            return true;
        }
    }
    return false;
}
// ************************************************************
// ANROP:   int number = numberOfValuesInRange(min, max,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar antalet värden som ligger i det halvt öppna intervallet  min <= x < max.
// ************************************************************
int numberOfValuesInRangeI(float min, float max, const float *pBegin, const float *pEnd){
    float arr[]={0,12,3,34,1};
    int antalVarde =0;
    int size = pEnd-pBegin;
    for (int i=0; i < size ; i++){
        if (pBegin[i] >= min && pBegin[i]< max)
            antalVarde +=1;
    }



    return antalVarde; // felaktig kodrad
}




// ################ version P, samma uppgifter löses nu med pekarnotation  ###############






float minimumP(const float *pBegin, const float *pEnd){
    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );
    float extreme = *pBegin;
    for (const float *p=pBegin ; p<pEnd; p+=1)
        if (*p<extreme)
            extreme = *p;
    return extreme;
}


float maximumP(const float *pBegin, const float *pEnd){
    // TODO
    float TheMain=*pBegin;
    for (const float *pv=pBegin;pv != pEnd ;pv++){
        if (*pv>TheMain){
            TheMain=*pv;
        }
    }
    return TheMain ; // felaktig kodrad
}

float sumP(const float *pBegin, const float *pEnd){

    // TODO
    float ox= 0;
    for(const float *px=pBegin; px != pEnd ; px++)
        ox +=*px;



    return ox; // felaktig kodrad
}

void fillRandomP(float *pBegin, float *pEnd){
    // TODO
    for (float *px=pBegin; px != pEnd ; px+=1)
        *px = rand()%10+1;
}



void fillSortedRandomP(float *pBegin, float *pEnd){
// TODO här måste kolla att jag skrivit fel *px=*pBegin+rand()%10+1; istället för den som finns nere eftersom den sumera randen med bara första elementet.
    *pBegin=rand()%10+1;
    for (float *px=(pBegin+1); px != pEnd; px++){
        *px=*(px-1)+rand()%10+1;
    }

}



bool hasValueInRangeP(float min, float max, const float *pBegin, const float *pEnd){
    // TODO
    for(const float *px=pBegin; px !=pEnd;px++){
        if (*px>=min && *px<max){
            return true;
        }

    }
    return false;
}


int  numberOfValuesInRangeP(float min, float max, const float *pBegin, const float *pEnd){
    // TODO
    float arr[]={0,12,3,34,1};
    int b=0;
    for (const float *px=pBegin; px != pEnd ; px++){
       if (*px>= min && *px < max){
           b +=1;
       }
    }

    return b; // felaktig kodrad
}


// ################ Skriv din egen testkod här! #################


void studentsTest1(){

    // Testa själv dina funktioner här!
    // Det är OBLIGATRORISKT att anropa varje funktion som du själv
    // implementeratrat,  så att labansvarig kan se att du förstått hur funktionerna skall
    // anropas!

    // Helst bör du också skriva kod som verifierar att dina funktioner
    // returnerar korrekta resultat för vissa exempeel på indata.
    // Istället för att skriva ut ett felmedelande på skärmen bör du se
    // till så att programmet kraschar om det innehåller ett fel!
    // Man kan göra detta genom att anropa:
    //   assert( false );
    // Men istället för att skriva:
    // if (!isOk) // om inte okay..
    //    assert( false );  // ..krascha programmet!
    // Bör man skriva:
    //   assert( isOk );
    // Ännu bättre... Istället för att skriva isOK kan man skriva ett uttryck som
    // blir true eller false, exempelvis (förutsatt att arr[0]==1 och arr[1]==2)
    //   assert( averageElementP(&arr[0],  &arr[2]) == 1.5 );








    cout << "(dina egna tester borde komma har!)\n";

    // TODO varför funkar inte om jag skrivit i test kod assert(minimumI(&arr[0],arr[5])==0);

    float arr[]={0,12,3,34,1};
    float arr2[]={12,4,5,6,67};



    assert(hasValueInRangeI(8.0f, 15.0f, &arr[0], &arr[5]) == true);
    assert(numberOfValuesInRangeI(1.0f,8.0f,&arr[0],&arr[5]) == 2);
    cout << minimumI(&arr[0],&arr[5]) << " borde vara 0" << endl;
    cout << sumI(&arr[0],&arr[5]) << " borde vara 50" << endl;
    cout << maximumI(&arr[0],&arr[5])<< " borde vara 34" << endl;
    fillRandomI(&arr2[0],&arr2[5]);
    cout << " detta är slump mässiga elementer" <<endl;
    for (int i=0; i<5 ; i++)
        cout << arr[i] << endl ;
    fillSortedRandomI(&arr2[0],&arr2[5]);
    cout << " detta är sorterade slump mässiga elementer" <<endl;
    for (int i=0; i<5 ; i++)
        cout << arr[i] << endl ;
    assert(hasValueInRangeP(8.0f,15.0f,&arr[0],&arr[5])==true);
    assert(numberOfValuesInRangeP(8.0f,15.0f,&arr[0],&arr[5])==1);
    assert(minimumP(&arr[0],&arr[5])==0);
    cout << sumP(&arr[0],&arr[5]) << " borde vara 50" << endl;
    assert(maximumP(&arr[0],&arr[5])==34);


}




void mainFunctionInStudent1(){

    cout << "\n\n\n################ testingCode1 ################# \n\n";

    studentsTest1();

    ragnarsTest1();
}


