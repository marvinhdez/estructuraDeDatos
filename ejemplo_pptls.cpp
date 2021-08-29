#include <cstdlib>
#include <iostream>
int por_seguido(int p)
{
   static int anterior;

   if (p >= 1 && p <= 5) {          // tirada válida del contrincante en la ronda anterior
      if (anterior == p) {             // van dos rondas seguidas que tira lo mismo
         switch (p) {
         case 1:
            return 2;
         case 2:
            return 3;
         case 3:
            return 1;
         case 4:
            return 3;
         case 5:
            return 2;
         }
      }
      else {                           // cambió su tirada con respecto a la última vez
         anterior = p;
      }
   }
   else {                           // es primera ronda o fue tirada inválida del contrincante
      anterior = 0;
   }

   return 1 + std::rand( ) % 5;     // tiramos un volado en caso de no-predicción
}


#include <iostream>     // necesario para usar el ejemplo de OmegaUp, pero no para la función

int main( )
{
   int p;

   while (std::cin >> p) {
      std::cout << por_seguido(p) << '\n';
   }
}
