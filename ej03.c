#include "chess.h"
#include "figures.h"

void display(){
  char** cuad = repeatH(join(reverse(whiteSquare),whiteSquare),4);
  cuad = up(cuad,reverse(cuad));
  interpreter(cuad);
}
