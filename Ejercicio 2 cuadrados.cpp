#include <stdio.h>


int main() {
    int suma = 0;
    
    for(int i = 1; i <= 100; i++) {
        suma += i * i;
    }
    
    printf("La suma de los cuadrados de los primeros 100 numeros enteros es: %d\n", suma);
    
    return 0;
}

