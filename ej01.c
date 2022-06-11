#include "chess.h"
#include "figures.h"

void display(){
  char** cuadrados = join(whiteSquare,reverse(whiteSquare));
  cuadrados = repeatH(cuadrados,4);
  interpreter(cuadrados);
}
