#include<stdio.h>
#include<stdlib.h>

 int main()
 {
	 FILE *arq;
	 int hora,minuto;
	 int hrs,min;

	    arq = fopen("horarios.txt", "r");


		if (arq == NULL) {
    		printf("\nProblemas na CRIACAO do arquivo\n\n");
    		return 0;
		}

		else {
		  	printf("\nDigite a Hora Atual: ");
	   	  	scanf("%d %d",&hrs,&min);

			if ((hrs>23) || (min=>60)) {
	   			 printf("\nDesculpe, Hora Invalida!\n\n");
	   			 return 0;
	   	        }

		        while(fscanf(arq,"%d %d\n",&hora,&minuto)!=EOF) {
				if (hrs<hora) {
			 		printf("O Horario do Proximo Onibus: %d:%d\n\n",hora,minuto);
			 		return 0;
			  	}
			 	else if (hrs==hora) {
					if (min<=minuto) {
						printf("O Horario do Proximo Onibus: %d:%d\n\n",hora,minuto);
						return 0;
					}
					else {

 						while(fscanf(arq,"%d %d\n",&hora,&minuto)!=EOF) {

							if (min<=minuto) {
								printf("O Horario do Proximo Onibus: %d:%d\n\n",hora,minuto);
								return 0;
				    			}
							else if (hrs!=hora){
					 			printf("O Horario do Proximo Onibus: %d:%d\n\n",hora,minuto);
								return 0;
				    			}
				        	}
			       		}
		        	}
		 	}
		printf("Desculpe, Nao Tem Mais Horario Hoje. Onibus so Amanha\n\n");
	   }

	fclose(arq);
 	return 0;
 }

