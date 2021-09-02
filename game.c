#include <stdio.h>
#include <stdbool.h>
#include "tictactoe.h"

int main() {
	char turn = 'X', board[] = { '-','-','-','-','-','-','-','-','-' };
	bool game = true;
	int turn_count = 0;

	printf("WELCOME TO TIC TAC TOE!!!!!\n(by @dekaottoman, type '-999' to exit)\n\n");
	while (game) {
		display_table(board);
		insert(board, &turn);
		turn_count++;
		//We check for a win
		if (check_win(board)) {
			display_table(board);
			printf("%c Wins!!!", turn);
			getch();
			exit(0);
		}
		//We check for a draw
		if (check_draw(turn_count)) {
			display_table(board);
			printf("Draw!!!");
			getch();
			exit(0);
		}
		sw_turn(&turn);
	}
}