#include <stdio.h>
#include <unistd.h>


void put_nbr(int);

void main()
{
        put_nbr(421212);
}

void put_nbr(int nb)
{
	
	int aux;
	if(nb < 10)
	{
		aux = nb;
		aux = aux + 48;
		write(1,&aux,1);
	}	
	while(nb > 9)
	{
		put_nbr(nb /10);
		nb = nb % 10;
		aux = nb + 48;
		write(1,&aux,1);
	}
}	

