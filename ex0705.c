/* ex0705 ����|���*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{  
    int a,b,i,j;  //a���D�j��; b���ť�; i���[; j���� 
    for(a=0;a<6;a++) //�M�w�H�U�`���� 
    {
	    for(b=6;b>a;b--) //�ťաA�q6���U��
	    {printf(" ");}
		if(a%2!=0) //�p�Gb�O�_�� 
		{
	       for(i=1;i<8;i++)  //����[���B�⦡ 
	       {printf("%d",i);}
	    }else   //�p�Ga�O���� 
		{
	       for(j=7;j>0;j--) //�����B�⦡ 
	       {printf("%d",j);}
		}printf("\n");  //�H�W���槹�@���ᴫ��A�A�~�� 
	}
}
