/* ex0702 */ 
/* ��u�@�� 40618119 �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0,b=0,Code,i,j,sum=0;   //a,b���F�P�_�Ÿ��ACode��J�Ai,j��l�ȡAsum�p���s�� 
  scanf("%d",&Code); //��J�ƭ� 
  for(i=1,j=1;i<=Code;i+=2,j++)  /*j�H���]�j���J�����٬O�_�ơA����-�A�_��+*/ 
   {
       if(j%2==0) //�P�_�O�_������ 
	   { 
	   		sum-=i;  //-���B�� 
	   		a+=j;  //�P�_n�e���Ÿ��ҥ�  
	  		printf("-%d",i);  //���� 
	   }
	   else //�_�Ʀ� 
	   {    
	        sum+=i; //+���B�� 
	        b+=j; //�P�_n�e���Ÿ��ҥ� 
	        if(i!=1){printf("+");} //���� 
	        printf("%d",i);    
	   }  
   } printf("=%d\n",sum); //��X 
   printf("1��n��%d�e�����Ÿ��O�G%s\n2��sum�G%d\n",i-2,a>b? "-":"+",sum); 
   /*�T���B��Ȭ��F�P�_�Ÿ��Fsum���B�⵲�G*/ 
  system("PAUSE");	
  return 0;
}
