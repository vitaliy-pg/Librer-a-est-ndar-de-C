//programa para abrir un archivo de texto

#include <iostream>
#include <cstdio>

int main() {

    const char* nombreArchivo = "mi_archivo.txt";
    FILE* archivo = fopen(nombreArchivo, "r");
