/* ex0708 ¦C¦LASCII 0~255*/
/* ¸ê¤u¤@¥Ò 40618119 ¬I·ç¨¶*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int i,j,n=0;
	printf("    ");
	for(n=0;n< 10;n++)
	{
		printf("%3d",n);
	}
	printf("\n");
	printf("      ----------------------------");
	for(i=0;i<128;i++)
	{
		if(i%10==0)
		{
			printf("\n");
			printf(" %2d|",j); 
			j++;
		}if(i>=8 && i<=13)
		{
			printf("   ");
		}else
		{
			printf("  %c",(char)i);
		}
	}
}
