#include "chess.h"
#include "figures.h"

void display(){
  char** cuadrados = repeatH(join(reverse(whiteSquare),whiteSquare),4);
  interpreter(cuadrados);
}
