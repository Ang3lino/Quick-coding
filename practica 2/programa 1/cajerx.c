#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include "TADColaDin.h" 	
#include "TADColaDin.c"
/*
#define t_base	10		
#define t_cliente	1		
#define t_atencion	3*/	

int main(void)
{
    
	//unsigned char t_base;
	int t_base;
	//unsigned 	char t_cliente;
	int t_cliente;
	//unsigned char t_atencion;
	int t_atencion;
	
	printf("valor tbase \n");
    //scanf("%hhu",&t_base);
    //gets(t_base);
    scanf("%i",&t_base);
    fflush( stdin );
    printf("t_base es %u \n",t_base);
    
    printf("valor tcliente \n");
    //scanf("%hhu",&t_cliente);
    //gets(t_cliente);
    scanf("%i",&t_cliente);
    fflush( stdin );
    printf("t_cliente es %u \n",t_cliente);
    
	printf("valor atencion \n");
    //scanf("%hhu",&t_atencion);
    //gets(t_atencion);
    scanf("%i",&t_atencion);
    fflush( stdin );
    printf("t_atencion es %u \n",t_atencion);

	//unsigned int tiempo = 0;
	int tiempo = 0;
	//unsigned int cliente = 0;
	int cliente = 0;
	int fila;
	elemento e;
	
	srand(time(NULL));

	//scanf("%d %d", %);
	
	cola cajera[5];

	Initialize(&cajera[1]);
	Initialize(&cajera[2]);
	Initialize(&cajera[3]);
	Initialize(&cajera[4]);
	Initialize(&cajera[5]);

	while (e.n < 100)
	{
		Sleep(t_base);	
		tiempo++;			

		if (tiempo % t_atencion == 0)
		{
			//Cajera 0
			if (!Empty(&cajera[1]))
			{
				e = Dequeue(&cajera[1]);
				printf("\n\t\tSe atendio al: %d en la caja 1", e.n);
			}
			else
			{
				printf("\n\t\tNo hay nadie en la caja 1");
			}
			//Cajera 1
			if (!Empty(&cajera[2]))
			{
				e = Dequeue(&cajera[2]);
				printf("\n\t\tSe atendio al: %d en la caja 2", e.n);
			}
			else
			{
				printf("\n\t\tNo hay nadie en la caja 2");
			}
			//Cajera 2
			if (!Empty(&cajera[3]))
			{
				e = Dequeue(&cajera[3]);
				printf("\n\t\tSe atendio al: %d en la caja 3", e.n);
			}
			else
			{
				printf("\n\t\tNo hay nadie en la caja 3");
			}
			//Cajera 3
			if (!Empty(&cajera[4]))
			{
				e = Dequeue(&cajera[4]);
				printf("\n\t\tSe atendio al: %d en la caja 4", e.n);
			}
			else
			{
				printf("\n\t\tNo hay nadie en la caja 4");
			}
			//Cajera 4
			if (!Empty(&cajera[5]))
			{
				e = Dequeue(&cajera[5]);
				printf("\n\t\tSe atendio al: %d en la caja 5", e.n);
			}
			else
			{
				printf("\n\t\tNo hay nadie en la caja 5");
			}
		}

		if (tiempo % t_cliente == 0)
		{
			cliente++;				
			e.n = cliente;			//n_cliente
			fila=rand()%5;			
			Queue(&cajera[fila], e);
			printf("\nLlego cliente: %d a la caja %d", e.n,fila);
		}

		
		printf("\n%d clientes en cola 1",Size(&cajera[1]));
		printf("\n%d clientes en cola 2",Size(&cajera[2]));
		printf("\n%d clientes en cola 3",Size(&cajera[3]));
		printf("\n%d clientes en cola 4",Size(&cajera[4]));
		printf("\n%d clientes en cola 5",Size(&cajera[5]));
	}
	return 0;
}
