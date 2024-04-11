#include <stdlib.h>
#include <stdio.h>

void print_board(int *board, int size);

int main(void)
{
	int size = 5;
	int *board;
	int row;
	int col;

	row = 0;
	col = 2;
	board = (int *)malloc(size * size * sizeof(int));
	*(board + (size * row) + col) = 2;
	print_board(board, size);
	
	
	return 0;
}
