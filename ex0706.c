/* ��u�@�� 40618119 �I�稶*/
/* ex0706 ������l�q�Ʀr */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�üƺؤl 
int main() 
{
	int A_comp,B_comp,sum,enter,m=0; //A_comp �q��1; B_comp �q��2; sum �`�M;enter ��J 
 	srand(time(NULL));   //�ü�  
	do{
		if(m!=0) //�p�G��J���~�W�L�@�����椺�e 
		{printf("�ЧA�A��J�@��\n");} 
		printf("�п�J�@�Ӿ�Ƥ���(2~12)\n");
	 	printf("�A�q���Ʀr���G");
		scanf("%d",&enter); //��J
		m++; //�P�_�ܼ� 
	}while(enter<2 || enter>12);
	    A_comp=rand()%6+1; //�q������ 
     	B_comp=rand()%6+1; //�q������
		sum=A_comp+B_comp; //�`�M 
 		printf("�q����l����ܪ��Ʀr���G%d\n",A_comp); //��ܹq���������X 
 		printf("�q����l����ܪ��Ʀr���G%d\n",B_comp); //��ܹq���������X
 		printf("���u�q����l���`�M���G%d\n",sum); //��ܹq�����B�����`�M 
 		printf("%s\n",enter==sum? "����,�A����F\n":"�藍�_,�A���׿��F\n");
 		//�T��; �p�G�ŦX�N����,�_�h�N���~ 
}	
