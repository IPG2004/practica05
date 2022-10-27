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
#include <ctype.h>

int main () {

  char letra;
  std::cin >> letra;
  if (letra >= 'a' && letra <= 'z') {
      std::cout << toupper(letra) << std::endl;
  }else if (letra >= 'A' && letra <= 'Z') {
      std::cout << tolower(letra) << std::endl;
  }
}  
