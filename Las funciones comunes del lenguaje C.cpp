//programa basasdo en calculo del valor absoluto de un numero
#include <iostream>
void funcion1() {
    int numeroPositivo = 10;
    int valorAbsPositivo = abs(numeroPositivo);
    std::cout << "Valor absoluto de " << numeroPositivo << ": " << valorAbsPositivo << std::endl;

    int numeroNegativo = -5;
    int valorAbsNegativo = abs(numeroNegativo);
    std::cout << "Valor absoluto de " << numeroNegativo << ": " << valorAbsNegativo << std::endl;

}
#include <iostream>
#include <cstdlib>
int main() {
funcion1();
    std::cout << "Numero aleatorio sin cambiar la semilla: " << rand() << std::endl;

    unsigned int nuevaSemilla = 42; // Puedes cambiar este valor para obtener diferentes secuencias de números aleatorios
    srand(nuevaSemilla);
    std::cout << "Numero aleatorio con nueva semilla: " << rand() << std::endl;

    return 0;
}