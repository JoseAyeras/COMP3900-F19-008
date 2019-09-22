#pragma once

#define MAX_SIZE 40

int checkDistance(char icon, char input[][MAX_SIZE]);
void move(char icon, int pos);

void initField(char input[][MAX_SIZE], const int ROWS, const int COLS);
void initRandomWalls(char input[][MAX_SIZE], const int ROWS, const int COLS);
void updateField(char input[][MAX_SIZE], const int ROWS, const int COLS);

void generateTank(char input[][MAX_SIZE], const int ROWS, const int COLS);