/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnolo
 * Grado en Ingeniería Informática
 *
 * @file P48107_integer_division.cc
 * @author Izan Pérez González alu0101543345@ull.edu.es
 * @date 28 Oct 2022
 * @brief
 * @bug There are no known bugs
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
