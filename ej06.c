#include "chess.h"
#include "figures.h"

void display(){
  char** cuad = repeatH(join(reverse(whiteSquare),whiteSquare),4);
  char** piezas = join(join(join(rook, knight), bishop), queen);
  piezas = join(join(join(join(piezas, king), bishop), knight), rook);
  char** piezasNegras = reverse(piezas);
  char** peones = repeatH(pawn,8);
  char** peonesNegros = reverse(peones);
  char** final = superImpose(piezas, cuad);
  final = up(final, superImpose(peones,reverse(cuad)));
  final = up(final, up(cuad, reverse(cuad)));
  final = up(final, superImpose(peonesNegros, cuad));
  final = up(final, superImpose(piezasNegras, reverse(cuad)));
  interpreter(final);
}
