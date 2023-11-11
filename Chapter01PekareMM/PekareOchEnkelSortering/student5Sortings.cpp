#include "student5Sortings.h"
#include "student3swaps.h"
#include "ragnarstest5.h"

#include <iostream>
using namespace std;

// Läs detta!
// Nedan finns version I och P av bubble- respektive insert-sort.

// Själv har jag implementerat bubbleSortI och insertSortP.
// Två algoritmer återstår!



// ************************************************************
// ANROP:   char* namn = nameOfStudent5();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent5(){
    return "Ahmed Elhasan";  // Byt ut denna sträng mot ditt eget namn!
}



/**********************************************************************************
 * ANROP:   bubbleSortI( pBegin, pEnd);
 * UPPGIFT: pBegin o ch pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen bubbleSort beskrivs i uppdragshäftet!!
 *          Nedanstående I-version använder  heltalsindex och hakparanteser.
 * ********************************************************************************/

void bubbleSortI(float *pBegin, float *pEnd){
    long int size = pEnd - pBegin;
    for (long int maxIndex = size-1 ; maxIndex>0 ; maxIndex -= 1)
        for (int i=0 ; i<maxIndex ; i+=1)
            if (pBegin[i]>pBegin[i+1])
                swap( (pBegin[i]), (pBegin[i+1])); // din egen swap-funktion

    /*long int size=pEnd- pBegin;
    for (float* pmaxIndex= pEnd-1 ; pmaxIndex != pBegin ; pmaxIndex -- )
        for (float* px= pBegin; px != pmaxIndex ; px ++)
            if (pBegin > pBegin +1)
                swap(pBegin , pBegin +1);*/

}



/**********************************************************************************
 * ANROP:   insertSortP( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen insertSort beskrivs i uppdragshäftet!!
 *          Nedanstående P-version använder varken heltalsindex eller hakparanteser.
 * ********************************************************************************/
void insertSortP(float *pBegin, float *pEnd){
    for (float *pLastInOrder=pBegin; pLastInOrder<pEnd-1 ; pLastInOrder+=1){
        float x = *(pLastInOrder+1);
        float *pValue = pLastInOrder;
        for (   ; pValue>=pBegin && *pValue>x ; pValue-=1)
            *(pValue+1) = *pValue;
        *(pValue+1) = x;
    }
}

// ++++++++++++++++++++++++++ studentkod här nedanför ++++++++++++++++++++++++++++++


/**********************************************************************************
 * ANROP:   bubbleSortP( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av bubbleSort som
 *          beskrivs i uppdragshäftet!! Se bubbleSortI ovan!
 *
 *          Syftet är bl.a. att träna på pekare.
 *          Man får varken använda heltalsindex eller hakparanteser.
 * ********************************************************************************/
void bubbleSortP(float *pBegin, float *pEnd){
    // TODO skall skrivas av studenten
    for (float *pMaxIndex= pEnd-1 ; pMaxIndex >= pBegin ; pMaxIndex-- )
        for (float *pX = pBegin; pX < pMaxIndex ; pX++)
            if (*pX > *(pX +1))
                swap(*pX , *(pX +1));
    /*long int size=pEnd- pBegin;
    for (float* pmaxIndex= pEnd-1 ; pmaxIndex != pBegin ; pmaxIndex -- )
        for (float* px= pBegin; px != pmaxIndex ; px ++)
            if (*pBegin > *(pBegin +1))
                swap(*pBegin , *(pBegin +1));*/
    /// här jag gjort en bug, jag jämför med bara pBegin som är alltid första index och rör inte sig fram SOM ((((PX))));
    //jag glömde också och jämfört med pointer inte med value.. if (pBegin > pBegin+1)
    /// alltså jag hade två bugger först::::

}


/**********************************************************************************
 * ANROP:   insertSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av insertSort som
 *          beskrivs i uppdragshäftet!! se insertSortP ovan!
 *
 *          Nedanstående version skall använda heltalsindex och hakparanteser.
 *
 * ********************************************************************************/
void insertSortI(float *pBegin, float *pEnd){
    // TODO Fel försök

    // [1]  2/3   3/5   5/9    9/2


    //    float x=0;
    //    long int  size = pEnd- pBegin;
    //    for (int i=0; i< size -1; i++ ){
    //        if (pBegin[i]  > pBegin [i+1]){
    //            x = pBegin[i+1];
    //            for (int j=i ; j>=0   ; j--){
    //                //pBegin [j]< x
    //                if (pBegin[j]< x){
    //                    pBegin[j+1]=x;
    //                }
    //                else pBegin[j+1]=pBegin[j];
    //            }
    //            //pBegin[i+1]=pBegin[i];
    //        }
    //    }
    //}
    //  Fel försök
    //     for (int i=0; i < size -1; i++){
    //       if (pBegin[i]>pBegin[i+1]){
    //           float x= pBegin[i+1];
    //           for(int j=i ; j>0 ; j--){
    //               if (x < pBegin[j-1]){
    //                  pBegin[j-1]=x;
    //                  pBegin[j]=pBegin[j-1];
    //                  pBegin[j+1]=pBegin[j];

    //               }
    //           }
    //       }
    //   }

    //}
    //
    float x=0;
    int j=0;

    long int  size = pEnd- pBegin;
    for (int i=0; i< size-1; i++ ){
        x = pBegin[i+1];
        for ( j=i ; j>=0 && pBegin[j]> x; j--){
            pBegin [j+1]=pBegin[j];
        }
        pBegin[j+1]=x;
    }
}








void studentsTest5(){

    // Testa själv bubble- och insert- sort här!
    cout << "Dina egna tester måste komma haer!\n";

    // TODO
    cout << " arrayen är sorterad nar det ar 0 , 1, 1, 2, 2, 6, 7, 10 " << endl;
        float arr[]{2,6,0,1,7,2,1,10};
        bubbleSortI(&arr[0],&arr[8]);
        for (int i=0; i<8 ; i++)
            cout <<  arr[i] << endl;
        bubbleSortP(&arr[0],&arr[8]);
        for (int j=0; j<8 ;j++)
            cout <<arr[j] << endl;
        insertSortP(&arr[0],&arr[8]);
        for (int j=0; j<8 ;j++)
            cout << arr[j] <<endl;
        insertSortI(&arr[0],&arr[8]);
        for (int j=0; j<8 ;j++)
            cout << arr[j] <<endl;
}


void mainFunctionInStudent5(){

    cout << "\n\n\n################ testingCode5 #################\n\n";

    studentsTest5();

    ragnarsTest5();

}
