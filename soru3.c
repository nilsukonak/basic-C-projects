#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Search (int D[],int N,int sayi) 
{
	
	int i =0;         // 1 
	while(i<N){       // n+1 kere 
		if (D[i]==sayi)break;  //n*
		i++;                   //n*
	}
	if (i<N)return i ;
	else return -1;

}
