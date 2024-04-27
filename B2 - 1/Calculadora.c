/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int adi[2];
    int sub[2];
    int mult[2];
    int divi[2];
    int operando1;
    int operando2;
    int soma;
    int minuendo;
    int subtraendo;
    int diferenca;
    int fator1;
    int fator2;
    int produto;
    int dividendo;
    int divisor;
    int quociente;
    int resto;
    //char tipo[5] = {'A', 'S', 'M', 'D', '\0'};
    //int tipo = 0;
    int operacao = 0;
    
    while(operacao !=5){
     printf("Escolha qual operacao deseja fazer: \n1-somar \n2-subtrair \n3-multiplicar \n4-dividir \n5-Sair\n ");
     scanf("%i", &operacao);

     switch(operacao){
        
     case 1:
     if(operacao == 1){
        
        int somar(){
        
        printf("Digite o primeiro número: ");
        scanf("%i", &operando1);
        printf("Digite o segundo número: ");
        scanf("%i", &operando2);
        //adi[0] = operando1;
        //adi[1] = operando2;
         soma = operando1 + operando2;
        printf("%i + %i = %i\n", operando1, operando2, soma);
        }
    }
    //else{
    
    
     break;
    

     case 2:
    
    
     if(operacao = 2){
        
     int subtracao(){
        printf("Digite o primeiro numero: ");
        scanf("%d", &minuendo);
        printf("Digite o segundo numero: ");
        scanf("%d", &subtraendo);
        diferenca = minuendo - subtraendo;
        
        //sub[0] = minuendo;
        //sub[1] = subtraendo;
        //diferenca = sub[0] - sub[1];
        
        printf("%i - %i = %i\n", minuendo, subtraendo, diferenca);
        }
    }
    
     break;
    
     case 3:
    
     if(operacao = 3){
        
        int multiplicacao(){
        printf("Digite o primeiro numero: ");
        scanf("%d", &fator1);
        printf("Digite o segundo numero: ");
        scanf("%d", &fator2);
        
        //mult[0] = fator1;
        //mult[1] = fator2;
        
        produto = fator1 * fator2;
        
        printf("%i * %i = %i\n", fator1, fator2, produto);
        }
    
    }

    
     break;
    
     case 4:
    
     if(operacao = 4){
        
        int divisao(){
        printf("Digite o primeiro numero: ");
        scanf("%d", &dividendo);
        printf("Digite o segundo numero: ");
        scanf("%d", &divisor);
        
        //divi[0] = dividendo;
        //divi[1] = divisor;
        
        //quociente = divi[0] / divi[1];
        quociente = dividendo / divisor;
        
        printf("%i / %i = %i\n", dividendo, divisor, quociente);
        }
    }
    
     break;
    
     default:
     printf("opção inválida");
   }
   
    //tipo++;
  }
  
  return 0;
    
 
}
    
    
    
    
  

