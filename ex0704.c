/* ex0703 �B�I�Ƥ���*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{
	int i,j;
	char Code[256],sum; //Code��J�Asum��m 
	gets(Code); //��J 
	for(i=0,j=strlen(Code)-1;i<=j;i++,j--) // strlen(Code)�r����� 
	{
		sum=Code[i];  //�e���Ʀr���᭱��m 
		Code[i]=Code[j];
		Code[j]=sum;
    }puts(Code); //��X 
    system("PAUSE");
	return 0;
}
