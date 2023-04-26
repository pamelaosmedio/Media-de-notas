#include <stdio.h>

float cal_media(float nota1,float nota2);
char cal_conceito(float media);

int main() {
    float nota1, nota2, media;
    char conceito;


    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

   
    media = cal_media(nota1, nota2);

 
    conceito = cal_conceito(media);

    
    printf("Média: %.1f\n", media);
    printf("Conceito: %c\n", conceito);

    return 0;
}

float cal_media(float nota1, float nota2) {
    return (nota1 * 4 + nota2 * 6) / 10;
}

char cal_conceito(float media) {
    if (media >= 9.0) {
        return 'A';
    } else if (media >= 7.0) {
        return 'B';
    } else if (media >= 5.0) {
        return 'C';
    } else {
        return 'D';
    }
}