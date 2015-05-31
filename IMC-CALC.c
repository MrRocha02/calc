#include<stdio.h>
#include<conio.h>

void imc (float n1,float n2){
	   system("cls");
       printf("\nDigite o peso \n");
       scanf("%f",&n1);
       printf("\nDigite a altura \n");
       scanf("%f",&n2);
       printf("\nO Seu IMC: %.2f",n1/(n2*n2));}   

int main ()
{
	char op;
	float n1,n2;
	int ops;

	printf("****** MENU ******\n\n1 - IMC\n2 - CALCULADORA\n\n");
	scanf("%d",&ops);
	
		if(ops ==1){
  					imc (n1,n2);    
		}
		
		else if (ops ==2){
			system("cls");
			printf("Digite primeiro Valor: \n");
        	scanf ("%f",&n1);
        	printf("\nDigite o Segundo Valor: \n");
        	scanf ("%f",&n2);
        	printf("\nDigite o Operador: \n");
        	scanf("%s",&op);
        	
               if(op =='+')
                    n1 =(n1+n2); 
                    
            	else if(op=='/')
                    n1 =(n1/n2); 
                    
                else if(op=='-')
                    n1 =(n1-n2); 
                           
                else if(op=='*')
                    n1 =(n1*n2);
                
				else {
                    printf ("Operacao Invalida");
                    getch();
                   return 0;
				}
        
			printf("\n\nResultado: %.2f",n1);
		}
		
		else {
			system("cls");
			printf ("Opcao Invalida");       
			getch();
			return 0;
		}
		
}
