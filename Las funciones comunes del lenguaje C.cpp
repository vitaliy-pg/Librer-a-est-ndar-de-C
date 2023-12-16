//programa basasdo en calculo del valor absoluto de un numero
#include <iostream>
int main() {
    int numeroPositivo = 10;
    int valorAbsPositivo = abs(numeroPositivo);
    std::cout << "Valor absoluto de " << numeroPositivo << ": " << valorAbsPositivo << std::endl;

    int numeroNegativo = -5;
    int valorAbsNegativo = abs(numeroNegativo);
    std::cout << "Valor absoluto de " << numeroNegativo << ": " << valorAbsNegativo << std::endl;

}