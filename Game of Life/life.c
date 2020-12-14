/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#include "life.h"

int main(int argc, char *argv[]) {
	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);
	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;

	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

	return 0;
}


void initBoard(int vBoard[][YSIZE]) 
{
    /* write this function */
    
    for(int i = 0; i < XSIZE; i++)
    {
        for(int j = 0; j < YSIZE; j++)
        {
            //itialize start board as all 0 (DEAD)
            vBoard[i][j] = DEAD;
        }
    }
}


int neighbors(int vBoard[][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}


void playRound(int vBoard[][YSIZE]) {
	int tmpBoard[XSIZE][YSIZE];
	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	
	/* write this fragment */
    //When doing a simulation run, define a second two-dimensional
    // array. For each cell in the existing array, count the number
    // of neighbors it has, and decide what its fate will be on the 
    //new board. After having done this for all cells, copy the value
    // of your new board over the old one

    //variable 
    int x;
     
    //set the rules 
    for(int i = 0; i < XSIZE; i++)
    {
        for(int j = 0; j < YSIZE; j++)
        {
            //call the neighbors function
            x = neighbors(vBoard, i, j);
        
            if(x == 2)
            {
                //cell is alive
                tmpBoard[i][j] = ALIVE;  
            } 
            else if(x == 3)
            {
                //dead cell comes back to life due to reproduction
                tmpBoard[i][j] = ALIVE; 
            }
            else if(x > 3)
            {
                //Overpopulated ---> Dies
                tmpBoard[i][j] = DEAD; 
            }
            else if(x < 2)
            {
                //underpopulation --> Dies
                tmpBoard[i][j] = DEAD;
            }

        }
    }


    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}


void printBoard(int vBoard[XSIZE][YSIZE])
{
	/* write this fragment */
    //print each row and columnn
    int i;
    int j;
    for( i = 0; i < XSIZE; i++)
    {
        for(j = 0; j < YSIZE; j++)
        {
            printf("%d", vBoard[i][j]);
        }
        //print on a new line 
        printf("\n");
    } 
 
}