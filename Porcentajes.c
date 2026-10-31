#include <stdio.h>

int main(void)
{
    int opcion;
    double base, porcentaje;
    puts("=== CALCULADORA COMERCIAL DE PORCENTAJES ===");
    puts("1. Calcular porcentaje de una cantidad");
    puts("2. Aumentar una cantidad en un porcentaje");
    puts("3. Aplicar descuento");
    puts("4. Calcular que porcentaje representa A de B");
    printf("Operacion: ");
    if (scanf("%d", &opcion) != 1 || opcion < 1 || opcion > 4)
    {
        puts("Error: opcion invalida.");
        return 1;
    }

    if (opcion == 4)
    {
        double a, b;
        printf("Cantidad A: ");
        if (scanf("%lf", &a) != 1)
            return 1;
        printf("Cantidad B: ");
        if (scanf("%lf", &b) != 1 || b == 0)
        {
            puts("Error: B debe ser distinto de cero.");
            return 1;
        }
        printf("A representa el %.2f%% de B.\n", a / b * 100.0);
        return 0;
    }

    printf("Cantidad base: ");
    if (scanf("%lf", &base) != 1 || base < 0)
    {
        puts("Error: cantidad no valida.");
        return 1;
    }
    printf("Porcentaje: ");
    if (scanf("%lf", &porcentaje) != 1 || porcentaje < 0)
    {
        puts("Error: porcentaje no valido.");
        return 1;
    }

    double importe = base * porcentaje / 100.0;
    if (opcion == 1)
        printf("%.2f%% de %.2f = %.2f\n", porcentaje, base, importe);
    else if (opcion == 2)
        printf("Total con aumento: %.2f\n", base + importe);
    else
        printf("Total con descuento: %.2f | Ahorro: %.2f\n", base - importe, importe);
    return 0;
}
