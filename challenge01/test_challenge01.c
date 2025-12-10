#include <stdio.h>
#include <assert.h>

// Declaración de la función a probar
int suma(int a, int b);

int main() {
    // Test 1: Suma de dos positivos
    assert(suma(2, 3) == 5);
    
    // Test 2: Suma de positivo + negativo
    assert(suma(5, -3) == 2);
    
    // Test 3: Suma de dos negativos
    assert(suma(-2, -3) == -5);
    
    printf("\nTodos los tests pasaron!\n");
    return 0;
}
