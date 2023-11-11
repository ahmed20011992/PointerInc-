#include "student6tidtagningsexperiment.h"
#include "dalgorandom.h"
#include "student5Sortings.h"

#include <QElapsedTimer>
#include <algorithm>
#include <math.h>
#include "student5Sortings.h"
#include <string>
#include <iostream>
using namespace std;

typedef void(*FuncSorterare)(float* pBegin,  float* pEnd);

float timeToSort(FuncSorterare sorter, const char* nameOfFunction, int sizeOfArray){
    float *pArr = new float[sizeOfArray];
    for (int i=0; i<sizeOfArray; ++i){
        pArr[i] = dalgoRandom();
    }
    cout << "Vi kommer nu att sortera " << sizeOfArray << " tal med " << nameOfFunction << ", tryck return!:";
    string str;
    getline(cin, str);


    QElapsedTimer myTimer;
    myTimer.start();

    sorter(pArr, pArr+sizeOfArray);

    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    cout << "Fardig! Och det tog " << elapsedTime << " sekunder. \n";
    cout << "(Arrayens värden ligger mellan " << pArr[0] << " och " << pArr[sizeOfArray-1] << ")" << endl;

    delete [] pArr;
    return elapsedTime;
}

void ragnarsTidtagningsexperiment(){
    int size = 100000;
    cout << "Välkommen till Ragnars tidtagningexpreimet!\n";
    cout << "Vi skall sortera " << size << " element pa olika satt!" << endl << endl;

    cout << "Skriv körtiderna i nedanstående komentar (i programfilen)!\n";

    cout << "(Det kan dröja upp till nagon minut!)\n";


    timeToSort( bubbleSortI, "bubbleSortI", size );
    timeToSort( bubbleSortP, "bubbleSortP", size );
    timeToSort( insertSortI, "insertSortI", size );
    timeToSort( insertSortP, "insertSortP", size );

    cout << "ok, lat oss ocksa prova std::sort (som behandlas senare i kursen)\n";

    timeToSort( std::sort, "std::sort", size );

/*
    TODO: skriv vilka körtider du fick!
    Körtider:

Vi kommer nu att sortera 100000 tal med bubbleSortI, tryck return!:
Fardig! Och det tog 31.638 sekunder.
(Arrayens v├ñrden ligger mellan 2.44797e-06 och 0.999992)
Vi kommer nu att sortera 100000 tal med bubbleSortP, tryck return!:
Fardig! Och det tog 26.168 sekunder.
(Arrayens v├ñrden ligger mellan 3.59257e-05 och 0.999986)
Vi kommer nu att sortera 100000 tal med insertSortI, tryck return!:
Fardig! Och det tog 3.949 sekunder.
(Arrayens v├ñrden ligger mellan 7.65381e-07 och 0.999998)
Vi kommer nu att sortera 100000 tal med insertSortP, tryck return!:
Fardig! Och det tog 2.803 sekunder.
(Arrayens v├ñrden ligger mellan 7.20743e-06 och 0.999961)
ok, lat oss ocksa prova std::sort (som behandlas senare i kursen)
Vi kommer nu att sortera 100000 tal med std::sort, tryck return!:
Fardig! Och det tog 0.021 sekunder.
(Arrayens v├ñrden ligger mellan 8.32848e-06 och 0.999995)

  */
}

void mainFunctionInStudent6(){
    cout << "\n\n\n################ testingCode6 #################\n\n";

    ragnarsTidtagningsexperiment();
}
