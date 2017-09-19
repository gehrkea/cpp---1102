// Pointer und Arrays 

// Schreiben  Sie  ein  Programm  zur  Berechnung  des  minimalen  und maximalen Wertes eines eindimensionalen Arrays(Vektor) und bilden Sie den arithmetischen Mittelwert der Arraywerte. 
// Realisieren Sie eine Eingabe von maximal 10 Werten(Abbruch mit <Ctr + Z>und Nutzung von EOF und geben Sie die Werte für Minimum, Maximum und Durchschnitt sowie die Feldelemente aus.

// Benutzen   Sie   zur   Berechnung   eine   Funktion   mit   den Übergabeparametern Feldgröße, Feldbezeichner, Minimum, Maximum, Mittel 
// und  realisieren  Sie  den  Aufruf  der  Funktion  mittels Pointerübergabe.

//	Lagern Sie die Funktion in eine zweite Datei aus und binden Sie diese in das Mainprogramm ein.

#include "stdafx.h"

#ifndef HEADER_INCL
#define HEADER_INCL
#include "function.h"
#endif


int main(void) {

	int Array[10];

	int arraySize = 0;

	int minVal; int maxVal; float avgVal;

	int *pMinVal = &minVal;
	int *pMaxVal = &maxVal;
	float *pAvgVal = &avgVal;
	
	while (arraySize < 10 && (EOF != scanf_s("%d", &Array[arraySize]))) {

		printf("Got %d.\nEnter another (ctrl-z to stop).\n", Array[arraySize]);
	
		arraySize++;

	}

	
	calcValues(arraySize, Array, pMinVal, pMaxVal, pAvgVal);

	printf("The following %d values were entered into the array:\n", arraySize);
	
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", Array[i]);
	}

	printf("\nMin = %d, Max = %d, Average = %.2lf\n", *pMinVal, *pMaxVal, *pAvgVal);

	return 0;

}

