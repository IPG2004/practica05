/**
 *Universidad de La Laguna
 *Escuela Superior de Ingeniería y Tecnología
 *Grado en Ingeniería Informática
 *
 *file
 *author Izan Pérez González alu0101543345@ull.edu.es
 *date
 *brief
 *@bug There are no known busg
 */

#include <iostream>
#include <cstdlib>
  
int main() {
  
  std::cout << "Introduzca una letra mayúscula o minúscula para ver su otra versión" << std::endl;
  char letra;
  std::cin >> letra;
  if (letra >= 65 && letra <= 90) {
    letra=(letra + 32);
    std::cout << letra << std::endl;
  }else if (letra >= 97 && letra <= 122) {
    letra=(letra - 32);
    std::cout << letra << std::endl;
  }
  return 0;
}
