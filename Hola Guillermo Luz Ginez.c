#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[200];

    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre );
    printf( "Hola %s ", nombre );

    getch();

    return 0;
}
