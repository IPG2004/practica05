/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnolo
 * Grado en Ingeniería Informática
 *
 * @file
 * @author Izan Pérez González alu0101543345@ull.edu.es
 * @date
 * @brief
 * @bug There are no known busg
 */

#include <iostream>

int main () {
  std::cout << "Escriba 2 números enteros separados por un espacio para dividirlos" << std::endl;
  int dividendo, divisor;
  std::cin >> dividendo >> divisor;
  int resto{dividendo%divisor};
  std::cout << dividendo/divisor << " " << resto << std::endl;
  return 0;
}
