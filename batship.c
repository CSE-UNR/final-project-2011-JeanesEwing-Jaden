//Author: Jaden Jeanes-Ewing
//Final Project: Batship

#include <stdio.h>
#include <stdbool>
#define LOAD_BOARD "easy.txt"
void loadField(FILE* readFilePointer);
void playGame();
void checkGuess();
void gameWin();
int guessCount, hitCount, score;

//main
int main(){
	
	//intro
	printf("*****LET'S PLAY BATSHIP*****");
	
	//(re)play
	
	do{
	
		loadField();
	
	}while(again == 'y' || again == 'Y');	
	
	
	return 0;
}


//print board
void loadField(FILE* readFilePointer){
	
	readFilePointer = fopen(LOAD_BOARD, "r");
		
		if(readFilePointer == NULL){
			printf("File could not be opened");
			return 0;
		}
	
	fclose(readFilePointer);
	
	playGame();
}

void playGame();

//check guess
void checkGuess(){
	
	
}


//game win
void gameWin(){

	score = 100 - (guessCount - hitCount);
	
	printf("CONGRATULATIONS!!!!\nIt took %d turns for you to hit %d spots and destroy all the ships\nYour score is %d!\n", guessCount, hitCount, score);
	gameEnd();

	return 0;
}

//reset/end game
void gameEnd(){

	//reset counts/score
	guessCount = 0;
	hitCount = 0
	score = 100
		
	//again?
	printf("\n\nPlay again? (Y/N) ");
	scanf(" %c", &again);

	return 0;	
}
