/* ��u�@�� 40618119 �I�稶*/
/* ex0707 �P�_�r������ */ 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter; //��J 
	int digit=0, upper=0, lower=0, punct=0, cntrl=0, celse=0;
	printf("�P�_�r�������A��ESC��i���}\n");
	do{
		printf("\n�п�J���զr���G");
	    enter=getche();  //��J 
		if(enter==27) //�p�G����ESC�N���} 
		{ break; } 
		else if(isdigit(enter)) //�P�_�O�_�Ʀr0~9 
		{ digit++; }    
		else if(isalpha(enter)) //�P�_�O�_�^�� 
		{   
			if(isupper(enter)) //�P�_�j�g�r��
		    { upper++; }
		    else               //�P�_�p�g�r��
		    { lower++; }
		}
		else if(ispunct(enter)) //�P�_���I�Ÿ�
		{ punct++; }
		else if(iscntrl(enter)) //�P�_����r��
		{ cntrl++; }
		else
		{ celse++; } //��L����
	}while(1);
    printf("\n\n��J0~9�Ʀr %d ��.\n",digit);   //��ܼƦr���X�� 
    printf("��J�j�g�r�� %d ��.\n",upper);     //��ܤj�g�r�����X�� 
    printf("��J�p�g�r�� %d ��.\n",lower);    //��ܤp�g�r�����X��
	printf("��J���I�Ÿ� %d ��.\n",punct);    //��ܼ��I�Ÿ����X��
	printf("��J����r�� %d ��.\n",cntrl);    //��ܱ���r�����X��
	printf("��J��L���� %d ��.\n\n",celse);   //��ܨ�L���䦳�X��	
}	
