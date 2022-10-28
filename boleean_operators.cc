/**
 *Universidad de La Laguna
 *Escuela Superior de Ingeniería y Tecnología
 *Grado en Ingeniería Informática
 *
 *file boleean_operators.cc
 *author Izan Pérez González alu0101543345@ull.edu.es
 *date 28 Oct 2022
 *brief
 *@bug There are no known bugs
 */

#include <iostream>

int main() {
  
  std::cout << "TABLA DE LA VERDAD" << std::endl;
  bool p{true};
  bool q{false};
  std::cout << " p " << " q " << "!p " << "!q " << " p&&q " << " p||q " << std::endl;
  std::cout << " " << !p << "  " << q << "  " << p << "  " << !q << "   " << (!p&&q) << "     " << (!p||q) << std::endl;
  std::cout << " " << !p << "  " << !q << "  " << p << "  " << q << "   " << (!p&&!q) << "     " << (!p||!q) << std::endl;
  std::cout << " " << p << "  " << q << "  " << !p << "  " << !q << "   " << (p&&q) << "     " << (p||q) << std::endl;
  std::cout << " " << p << "  " << !q << "  " << !p << "  " << q << "   " << (p&&!q) << "     " << (p||!q) << std::endl;
  return 0;

}
