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
  
  std::cout << "Ingrese 2 números enteros separados por un espacio para realizar todas las operaciones posibles con ellos" << std::endl;
  int numero_1, numero_2;
  std::cin >> numero_1 >> numero_2;
  std::cout << "Suma: " << numero_1 << " + " << numero_2 << " = " << numero_1 + numero_2 << std::endl;
  std::cout << "Resta: " << numero_1 << " - " << numero_2 << " = " << numero_1 - numero_2 << std::endl;
  std::cout << "Multiplicación: " << numero_1 << " * " << numero_2 << " = " << numero_1 * numero_2 << std::endl;
  std::cout << "División: " << numero_1 << " / " << numero_2 << " = " << numero_1 / numero_2 << std::endl;
  std::cout << "Resto: " << numero_1 << " % " << numero_2 << " = " << numero_1 % numero_2 << std::endl;
  return 0;
}
