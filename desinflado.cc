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

/**int main() {
  
  char letra;
  std::cin >> letra;
  for(int i{0}; i <= letra; i++) {
      int resultado{i} = toupper(resultado{i});
  std::cout << resultado << std::endl;
  return 0;

}
int main()
{
   char cadena[] = "esto es una cadena de prueba";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      cadena[i] = toupper(cadena[i]);

   printf("%s\n", cadena);
   return 0;
}*/

int main() {
  
  std::cout << "Introduzca una letra mayúscula o minúscula para ver su otra versión" << std::endl;
  char letra[1];
  std::cin >> letra;
  for (int i{0}; i < letra.length(): i++) {
    letra[i] = toupper(letra[i]);
    std::cout << letra << std::ednl;
  for (int i{0}; i < letra.length(); i++) {
    letra[i] = tolower(letra[i]);
  }
  std::cout << leta << std::endl;
}
