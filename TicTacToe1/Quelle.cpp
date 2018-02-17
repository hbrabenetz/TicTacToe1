
#include <iostream>

using std::cout;
using std::endl;

int canIwin(int* field, const int NField, int nextPlayer, int nDraw);
int didIwin(int* field, const int NField, int nextPlayer);

int main() {

	const int NField = 9;
	int nField;
	int field[NField];
	int nextPlayer;

	int nGame, NGame = 1000;
	int nDraw;

	for (nGame = 0; nGame < NGame; ++nGame) {

		for (nField = 0; nField < NField; ++nField)
			field[nField] = 0;
		
		nextPlayer = 1; // Player 1 starts always, Player -1 is next

		for (nDraw = 0; nDraw < NField; nDraw++) {

			canIwin(field, NField, nextPlayer, nDraw);




		} // for (;;) {






	} // 	for (nGame = 0; nGame < NGame; ++nGame) {





	getchar();
	return 0;
}


int canIwin(int* field, const int NField, int nextPlayer, int nDraw) {

	// can I win with just this next draw? 
	// If yes I immediately do it

	if (nextPlayer == 1 && nDraw < 2)
		return 0;
	else if (nextPlayer == -1 && nDraw < 3)
		return 0;

	for (int nField = 0; nField < NField; ++nField) {

		if (field[nField] == 0) {
			field[nField] = nextPlayer;
			didIwin(field, NField, nextPlayer);
		}


	}


	return 0;
}


int didIwin(int* field, const int NField, int nextPlayer) {




	return 0;
}



