#include <stdio.h>

int main()
{
    int dni=0,digito=0;
    // printf("valor dni: %d, valor digito %d", dni, digito);
    printf("Bienvenido al calculador de letra de dni\n");
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 10000000;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 1000000;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 100000;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 10000;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 1000;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 100;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 10;
    printf("Introduce digito para el dni:\n");
    scanf("%d", &digito);
    dni += digito * 1;


    dni = dni % 23;
    switch (dni)
    {
    case 0: printf("Tu letra de dni es: t"); break;
    case 1: printf("Tu letra de dni es: r"); break;
    case 2: printf("Tu letra de dni es: w"); break;
    case 3: printf("Tu letra de dni es: a"); break;
    case 4: printf("Tu letra de dni es: g"); break;
    case 5: printf("Tu letra de dni es: m"); break;
    case 6: printf("Tu letra de dni es: y"); break;
    case 7: printf("Tu letra de dni es: f"); break;
    case 8: printf("Tu letra de dni es: p"); break;
    case 9: printf("Tu letra de dni es: d"); break;
    case 10: printf("Tu letra de dni es: x"); break;
    case 11: printf("Tu letra de dni es: b"); break;
    case 12: printf("Tu letra de dni es: n"); break;
    case 13: printf("Tu letra de dni es: j"); break;
    case 14: printf("Tu letra de dni es: z"); break;
    case 15: printf("Tu letra de dni es: s"); break;
    case 16: printf("Tu letra de dni es: q"); break;
    case 17: printf("Tu letra de dni es: v"); break;
    case 18: printf("Tu letra de dni es: h"); break;
    case 19: printf("Tu letra de dni es: l"); break;
    case 20: printf("Tu letra de dni es: c"); break;
    case 21: printf("Tu letra de dni es: k"); break;
    case 22: printf("Tu letra de dni es: e"); break;
    
    default:
        printf("No tienes letra por bromista");
        break;
    }

    return 0;
}
