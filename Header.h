#ifndef HEADER_H
#define HEADER_H


void initializeBoards(int**,int**,int);
int randomDiamond();
int getGuessedCoordinates(int,int);
int checkDiamonds(int,int,int**);
void provideHints(int,int,int**,int**);
void displayUserBoard(int**);
void displayDiamondBoard(int **);

#endif // HEADER_H
