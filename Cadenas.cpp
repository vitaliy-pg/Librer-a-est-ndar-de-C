//programa crear cadenas
#include <iostream>
#include <cstring>
int main() {

    const char* cadena1 = "Hola";
    const char* cadena2 = "Hola";
    const char* cadena3 = "Mundo";

    int resultado1 = strcmp(cadena1, cadena2);
    int resultado2 = strcmp(cadena1, cadena3);

    std::cout << "Comparacion entre cadena1 y cadena2: " << resultado1 << std::endl;
    std::cout << "Comparacion entre cadena1 y cadena3: " << resultado2 << std::endl;

    return 0;

}
