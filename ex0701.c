/* ex0701*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main()
{                                    
   float n,i,sum=0; //n��J�N���Ai��l�ȡAsum���B���s���� 
   scanf("%f",&n); //��J�ƭȡA�n�_�Ƭ���� 
   printf("1");  //1���}�Y 
   for(i=1;i<=n;i=i+2) //i+2�O���F���L�_�ưj�� 
   {
		sum =sum + ( (float)1 / (float)i ); //�B�⦡ 
	    if(i!=1) {printf(" + 1/%.0f",i);} //���� 
   }printf(" = %.3f\n",sum);  //���G 
   
  system("PAUSE");	
  return 0;
}
