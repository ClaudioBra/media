#include <stdio.h>
#include <stdlib.h>

int main(){

float n1, n2, n3, n4, notaexame, media;

printf("Primeira nota: "); scanf("%f", &n1);
printf("Primeira nota: "); scanf("%f", &n2);
printf("Primeira nota: "); scanf("%f", &n3);
printf("Primeira nota: "); scanf("%f", &n4);


media = (n1 *(0.2) + n2 *(0.3) + n3 *(0.4) + n4 *(0.1));

printf("Media: %.2f", media);

if (media >= 7){
printf("\nAluno aprovado.");
}
else if (media < 5){
printf("\nAluno reprovado.");
}
else if (media >= 5 && media <= 6.9){
printf("\nAluno em exame.");
printf("\nNota do exame: "); scanf("%f", &notaexame);
media = (media + notaexame) / 2;

if (media >= 5){
printf("Aluno aprovado.");
}
else if (media <= 4.9){
printf("Aluno reprovado.");
}
printf("\nMedia final: %.2f", media);
}





    return 0;
}
