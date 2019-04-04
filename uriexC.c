#include <stdio.h>
 
int main() 
{
    
    int o,i;                   
    char d,p='N';          
    scanf("%d", &o); 

    while (o != 0)   
    {
	
	    
	/*a posição inicial do soldado é sempre N, se vc não setar ela no começo de cada loop ela vai ser o ultimo valor(o escrito na tela)*/
	p='N';
	/*o for executa ATE a condição ser falsa, por exemplo se colocar i==0 ele não vai executar, pois o i é zero e os comandos não podem ser 0,por isso vc deve colocar i<o,pro loop executar ATE i ser igual a n */
	for(i=0; i<o; i++)        
	{
            
	    /*Se vc colocar varios ifs sozinhos ele vai executar a primeira instrução,por exemplo 'd == 'E' e p == 'N'' e vai atribuir o valor 'O' a p, e como os ifs estão soltos ele vai pra próxima instrução que é verdade 'd == 'O'(o valor atribuido anteriormente) e p == 'N''.Ele vai ficar fazendo isso até o final, por isso vc deve por else if no lugar dos próximos ifs, com isso ele só vai executar uma intrução*/	
	    /*O scanf lê carateres, mas o enter tmb é um caractere, então ao invés de por exemplo ele ler 3 caracteres, ele vai ler 2 e o enter.Pra contornar isso tem que por um espaço antes do marcador  ou usar a função 'fflush(stdin)' */	
	    scanf(" %c", &d);  
	    if(d=='E' && p=='N')      
     		p='O';               
	    else if(d=='E' && p=='O')
                p='S';
	    else if(d=='E' && p=='S')
                p='L';
	    else if(d=='E' && p=='L')
                p='N';
	    else if(d=='D' && p=='N')
                p='L';
	    else if(d=='D' && p=='L')
                p='S';
	    else if(d=='D' && p=='S')
                p='O';
	    else if(d=='D' && p=='O')
                p='N';
        }
        
	/*o uri reclama se n tiver \n no final*/
	printf("%c\n", p);
	scanf("%d", &o);            
    }
    return 0;
}
