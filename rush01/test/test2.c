#include <stdlib.h>
#include <stdio.h>


int	ft_checks(int *board, int *clues, int size);

int main() {
  int *board;
  int size = 3;
  board = (int *)malloc(size * size * sizeof(int));
  
  *board = 1;
  *(board + (size * 0) + 1) = 1;
  *(board + (size * 0) + 2) = 2;
  *(board + (size * 1) + 0) = 2;
  *(board + (size * 1) + 1) = 3;
  *(board + (size * 1) + 2) = 1;
  *(board + (size * 2) + 0) = 1;
  *(board + (size * 2) + 1) = 2;
  *(board + (size * 2) + 2) = 3;
  
  int *clues;
  clues = (int *)malloc(size * 4 * sizeof(int));
  
  *clues = 1;
  *(clues + (size * 0) + 1) = 2;
  *(clues + (size * 0) + 2) = 2;
  *(clues + (size * 1) + 0) = 3;
  *(clues + (size * 1) + 1) = 2;
  *(clues + (size * 1) + 2) = 1;
  *(clues + (size * 2) + 0) = 1;
  *(clues + (size * 2) + 1) = 2;
  *(clues + (size * 2) + 2) = 3;
  *(clues + (size * 3) + 0) = 2;
  *(clues + (size * 3) + 1) = 2;
  *(clues + (size * 3) + 2) = 1;
  
  printf("%d",ft_checks(board, clues, size));
  return 0;
}
