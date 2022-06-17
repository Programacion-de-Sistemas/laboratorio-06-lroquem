#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

char** flipV(char** fig){
  int row, col, i, j = 0;
  while(fig[j]){
    i = 0;
    while(fig[j][i]){
      i++;
    }
    j++;
  }
  row=j+1;
  col=i;
  printf("%d\t%d\n", row, col);
  char** res = (char**)malloc(sizeof(char*) * row);
  while(res[j])
    res[j] = (char*)malloc(sizeof(char) * col);
  return res;
}