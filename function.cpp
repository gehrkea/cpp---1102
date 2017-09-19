#include "stdafx.h"

void calcValues(int arraySize, int *Array, int *Min, int *Max, float *Avg) {

	float sum = 0;

	*Min = Array[0];
	*Max = Array[0];
	*Avg = 0;

	for (int i = 0; i < arraySize; ++i) {

		if (Array[i] > *Max) {
			*Max = Array[i];
		}

		if (Array[i] < *Min) {
			*Min = Array[i];
		}

		sum = sum + Array[i];
	}

	*Avg = sum / arraySize;

}