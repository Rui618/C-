/* ex0604 �^���ഫ*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{                                    
   char sum; //sum����J�N�� 
   scanf("%c",&sum); //��J 
   if(sum=='a')  //�P�_�O�_a 
    {
        printf("A\n"); //�ŦX�L�XA 
    }
   else if(sum=='b')  //�P�_�O�_b
   {
        printf("B\n"); //�ŦX�L�XB
   }
   else if(sum=='A')  //�P�_�O�_A
   {
        printf("a\n"); //�ŦX�L�Xa
   }
   else if(sum=='B')  //�P�_�O�_B
   { 
        printf("b\n");  //�ŦX�L�Xb
   }
   else
   {
   	    printf("�A��J���r�����Oa or A or b or B\n"); //�Ҥ��O 
   }
  
  system("PAUSE");	
  return 0;
}
