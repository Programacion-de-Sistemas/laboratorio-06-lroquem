#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

char** res = NULL;

char** flipV(char** fig){
  int row, col, i, j = 0;
  while(fig[j]){
    i = 0;
    while(fig[j][i]){
      i++;
    }
    j++;
  }

  //printf("ji: %d\t%d\n", j, i);
  row=j+1;
  col=i;
  //printf("rc: %d\t%d\n", row, col);
  res = (char**)malloc(sizeof(char*) * row);

  for(j = 0; j < row; j++){
    res[j] = (char*)malloc(sizeof(char) * col);
  }  

  //printf("wj: %d\n", j);

  for(j = 0; j < row; j++){
    for(i = 0; i < col; i++){
      res[j][i] = '#';
      printf("%c",res[j][i]);
    }
    printf("\n");
  }

  printf("asig ji: %d\t%d\n", j, i);
  //printf("%c\n",res[10][10]);
  //res[j][0] = '0';
  printf("despues res[j]");
  printf("hola");
  return NULL;
}