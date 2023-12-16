//programa para abrir un archivo de texto

#include <iostream>
#include <cstdio>

int main() {

    const char* nombreArchivo = "mi_archivo.txt";
    FILE* archivo = fopen(nombreArchivo, "r");

    if (archivo == nullptr) {
        // El archivo no pudo abrirse, muestra un mensaje de error
        std::cerr << "Error: No se pudo abrir el archivo '" << nombreArchivo << "'" << std::endl;
