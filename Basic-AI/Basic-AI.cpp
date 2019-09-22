// Basic-AI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Header.h"

using namespace std;

int checkDistance(char icon, char input[][MAX_SIZE]) {
	int dist = 0;
	return dist;
}

void updateField(char input[][MAX_SIZE], const int ROWS, const int COLS) {
	for (int r = 0; r < ROWS; r++) {
		for (int c = 0; c < COLS; c++) {
			cout << input[r][c] << ' ';
		}
		cout << endl;
	}
}

void generateTank(char input[][MAX_SIZE], const int ROWS, const int COLS) {
	char tank = 'T';
	
	random_device rand;
	mt19937 generator(rand());
	uniform_int_distribution<> distr(1, ROWS - 2);
	uniform_int_distribution<> distr2(1, COLS - 2);

	int r = distr(generator);
	int c = distr2(generator);

	input[r][c] = 'T';

	cout << endl;
}

void initRandomWalls(char input[][MAX_SIZE], const int ROWS, const int COLS) {

	random_device rand;
	mt19937 generator(rand());
	uniform_int_distribution<> distr(1, ROWS-2);
	uniform_int_distribution<> distr2(1, COLS - 2);

	int r = distr(generator);
	int c = distr2(generator);

	// generate a wall somewhere in the middle of the field 

	while (c < COLS-2) {
		if (!(input[r][c] == 'T' && (input[r - 2][c - 2] != 'B' || input[r + 2][c - 2] != 'B'
			|| input[r + 2][c + 2] != 'B' || input[r - 2][c + 2] != 'B'))) {
			input[r][c] = 'W';
		}
		c++;
	}
}

void initField(char input[][MAX_SIZE], const int ROWS, const int COLS) {
	for (int r = 0; r < ROWS; r++) {
		if (r == 0 || r == ROWS - 1) {
			for (int c = 0; c < COLS; c++) {
				input[r][c] = 'B';

			}
		}
		else {
			for (int c = 0; c < COLS; c++) {
				if (c == 0 || c == COLS - 1) {
					input[r][c] = 'B';
				}
				else {
					input[r][c] = '.';
				}
			}
		}
	}
}

int main() {
	string input;
	bool done = false;

	const int ROWS = 20;
	const int COLS = 40;
	char field[20][40];

	initField(field, ROWS, COLS);
	generateTank(field, ROWS, COLS);
	initRandomWalls(field, ROWS, COLS);

	updateField(field, ROWS, COLS); // set up the field with tank and wall in place


	return 0;
}
