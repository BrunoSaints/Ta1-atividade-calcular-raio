#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv[])
{
    float a;
    float i;
    float r;
    
    printf ("Insira o raio: \n");
    scanf ("%f", &r);

    i = 3.14;
    a = i * (r * r);

    printf ("\n%.2f",a);
    printf (" cm2");

    return EXIT_SUCCESS;
}