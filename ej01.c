#include "chess.h"
#include "figures.h"

void display(){
  char** cuadrados = join(whiteSquare,reverse(whiteSquare));
  interpreter(cuadrados);
}
