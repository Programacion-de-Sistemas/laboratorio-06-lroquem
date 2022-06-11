#include "chess.h"
#include "figures.h"

void display(){
  char** cuad = repeatH(join(reverse(whiteSquare),whiteSquare),4);
  char** piezas = join(join(join(rook, knight), bishop), queen);
  piezas = join(join(join(join(piezas, king), bishop), knight), rook);
  piezas = reverse(piezas);
  piezas = superImpose(piezas, cuad);
  interpreter(piezas);
}
