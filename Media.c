#include<stdio.h>
#include<conio.h>
// código fodidão kkkkk
 int main () {
 	
 	float notas,media;
 	int i;
 	
 	for (i=0;i<4;i++) {
 		printf("Digite %d Nota: ",i+1);
 		scanf("%f",&notas);
 		media=notas+media;
	 }
 	
 	media=media/i;

 	if ((media<6) && (media>=0))
 		printf("\nMedia: %.2f \nReprovado!",media);
 	
 	else if ((media>=6) && (media <=10))
 		printf("\nMedia: %.2f \nReprovado!",media);
 	
 	else
 		printf("\nMedia: %.2f \nMedia Invalida",media);
 }
