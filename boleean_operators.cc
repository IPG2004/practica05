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
