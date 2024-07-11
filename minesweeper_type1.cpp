/*
 C++ Program for Implementation of Minesweeper Game: Input
for coordinates is taken from user 
*/

#include <bits/stdc++.h>
using namespace std;
#define BEGINNER 0
#define INTERMEDIATE 1
#define ADVANCED 2
#define MAXSIDE 25
#define MAXMINES 99
#define MOVESIZE 526 // (25 * 25 - 99)


void chooseDifficultyLevel(){
  /*
    --> BEGINNER = 9 * 9 Cells and 10 Mines
    --> INTERMEDIATE = 16 * 16 Cells and 40 Mines
    --> ADVANCED = 24 * 24 Cells and 99 Mines
  */

  int level;

  cout<<"Enter the Difficulty Level"<<endl;
  cout<<"Press 0 for BEGINNER (9 * 9 Cells and 10 Mines)"<<endl;
  cout<<"Press 1 for INTERMEDIATE (16 * 16 Cells and 40 Mines)"<<endl;
  cout<<"Press 2 for ADVANCED (24 * 24 Cells and 99 Mines)"<<endl;
  scanf("%d", &level);

  if(level==BEGINNER){
    SIDE=9;
    MINES=10;
  }

  if(level==INTERMEDIATE){
    SIDE=16;
    MINES=40;
  }

  if(level==ADVANCED){
    SIDE=24;
    MINES=99;
  }
}

//A function to place mines randomly on the board
void placeMines(int mines[][2]){
  bool mark[MAXSIDE*MAXSIDE];
  memset(mark, false, sizeof(mark));

  //Continue until all random mines have been created
  for(int i: MINES){
    int random=rand() % (SIDE*SIDE);
    int x=random/SIDE;
    int y=random%SIDE;

    //Add the mine if no mine is placed at this position on the board
    if(mark[random]==false){
      //Row Index of the mine
      mines[i][0]=x;
      //Column Index of the mine
      mines[i][1]=y;

      //Place the mine
      board[mines[i][0]][mines[i][1]]= '*';
      mark[random]=true;
      i++;
    }
  }
  return; 
}


//A function to randomly assign moves
void assignMoves(int moves[][2], int movesLeft){
  bool mark[MAXSIDE*MAXSIDE];
  memset(mark, false, sizeof(mark));

  //Continue until all moves are assigned.
  for(int i=0; i<movesLeft; i++){
    int random=rand()%(SIDE*SIDE);
    int x=random/SIDE;
    int y=random%SIDE;

    //Add the mine if no mine is placed at this position on the board
    if(mark[random]==false){
      //Row Index of the Mine
      moves[i][0]=x;
      //column Index of the Mine
      moves[i][1]=y;

      mark[random]=true;
      i++;
    }
  }
  return;
}

//A function to cheat by revealing where the mines are placed
void cheatMinesweeper(Board& realBoard){
  cout<<"The mines are located at: "<<endl;
  realBoard.printBoard();
  return;
}