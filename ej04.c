#include "chess.h"
#include "figures.h"

void display(){
  char** cuad = repeatH(join(reverse(whiteSquare),whiteSquare),4);
  char** piezas = join(rook, knight);
  interpreter(piezas);
}
