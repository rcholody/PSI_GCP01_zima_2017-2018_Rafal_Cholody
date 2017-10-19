#include <stdio.h>
#include <iostream>

#include "perceptron.h"


int main() {
	// Constants
	const int TRAINING_ITERATIONS = 16;
	const int NUM_OF_INPUTS = 2;
	const double TRAINING_RATE = 0.2;

	const double ZERO_ZERO[] = { 0, 0 };
	const double ZERO_ONE[] = { 0, 1 };
	const double ONE_ZERO[] = { 1, 0 };
	const double ONE_ONE[] = { 1, 1 };


	int i;
	// Creating Perceptron instances
	Perceptron *pAND = Perceptron_new(NUM_OF_INPUTS, TRAINING_RATE);


	// Printing the results of the randomly generated perceptrons (BEFORE TRAINING)


	printf("Results for 'AND' perceptron, BEFORE training:\n");
	printf("Input: (0,0). Result: %d\n", Perceptron_getResult(pAND, ZERO_ZERO));
	printf("Input: (0,1). Result: %d\n", Perceptron_getResult(pAND, ZERO_ONE));
	printf("Input: (1,0). Result: %d\n", Perceptron_getResult(pAND, ONE_ZERO));
	printf("Input: (1,1). Result: %d\n", Perceptron_getResult(pAND, ONE_ONE));

	// Training each of the perceptrons
	for (i = 0; i < TRAINING_ITERATIONS; i++) {
		Perceptron_train(pAND, ZERO_ZERO, 0);
		Perceptron_train(pAND, ZERO_ONE, 0);
		Perceptron_train(pAND, ONE_ZERO, 0);
		Perceptron_train(pAND, ONE_ONE, 1);

	}

	// Printing the results of the trained perceptrons (AFTER TRAINING)


	printf("Results for 'AND' perceptron, AFTER training:\n");
	printf("Input: (0,0). Result: %d\n", Perceptron_getResult(pAND, ZERO_ZERO));
	printf("Input: (0,1). Result: %d\n", Perceptron_getResult(pAND, ZERO_ONE));
	printf("Input: (1,0). Result: %d\n", Perceptron_getResult(pAND, ONE_ZERO));
	printf("Input: (1,1). Result: %d\n", Perceptron_getResult(pAND, ONE_ONE));

	system("pause");
	return 0;
}

