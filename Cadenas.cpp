//programa crear cadenas
#include <iostream>
#include <cstring>
int main() {

    const char* cadena1 = "Hola";
    const char* cadena2 = "Hola";
    const char* cadena3 = "Mundo";

    size_t longitud1 = strlen(cadena1);
    size_t longitud2 = strlen(cadena2);
    size_t longitud3 = strlen(cadena3);

    int resultado1 = strcmp(cadena1, cadena2);
    int resultado2 = strcmp(cadena1, cadena3);

    std::cout << "Longitud de cadena1: " << longitud1 << std::endl;
    std::cout << "Longitud de cadena2: " << longitud2 << std::endl;
    std::cout << "Longitud de cadena3: " << longitud3 << std::endl;
    std::cout << "Comparacion entre cadena1 y cadena2: " << resultado1 << std::endl;
    std::cout << "Comparacion entre cadena1 y cadena3: " << resultado2 << std::endl;

    return 0;

}
// añado tambien el apartado b