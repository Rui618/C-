/* ��u�@�� 40618119 �I�稶*/
/* ex0714 ������-���D*/ 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter[255],sum[20];
	int n,i=1,j=1,a=0,b=0,c=0,d=0,e=0,h=0,upper[101];
	printf("�п�J�A���Ǹ��Ωm�W�G");scanf("%d %s",&n,&sum);
	printf("�ЧQ����L�s���J��L�W������r���A���ܫ��UEsc��ᰱ��\n");
	do{
		printf("\n�п�J��L�W������r���G");
		enter[i]=getche();  
		if(enter[i]==27) { printf("\bEsc(���})"); break; }     //�p�G����ESC�N���} 
		else if(isdigit(enter[i])){a++;}     //�P�_�O�_�Ʀr0~9 
		else if(isalpha(enter[i]))       //�P�_�O�_�^�� 
		{   
			if(enter[i]==65 ||enter[i]==67 ||enter[i]==101) 		  //�P�_�O�_A�BC�Be���r�� 
			{ b++; upper[b]=enter[i];}
			else {c++;}  						//���O�⦳�Ħr��  
		}
		else if( ispunct(enter[i])){d++;}       //�P�_���I�Ÿ�
		else if(iscntrl(enter[i]))//�P�_����r��
		{
			e++;
			if(enter[i]==9){printf("\b\b\b\b\b\b\b\btab");}
			if(enter[i]==8){printf(" backspace");}
		}	    
		else{h++;if(enter[i]==32)printf("\b�ť���");}		//��L����
		i++;          
    }while(i!=100);
    printf("\n\n\t\t\t\t��T�u�{�t");printf("\n\t\t\t\t__________");
    printf("\n\t\t\t\/\"�r�������Φ��Ʋέp��\'\\");printf("\n\t\t\t=========================");
	printf("\n\t�Ǹ��G%d\n\t�m�W�G%s",n,sum); 
	printf("\n\t1.��J0~9�Ʀr%2d��",a);        //��ܼƦr���X��
	printf("\n\t2.��J�j�g�r��A�BC�r���P�p�g�^��e�r��%2d��",b);  //���A�BC�Be���r�����X��
   	if(b!=0)
	{   
		for(j=0;j<=b;j++)
		{j==0?printf("\n\t  �䤤����̦���"):printf("%2c",upper[j]);} //A�BC�Be��ܿ�J�Ƨ� 
	}  
   	printf("\n\t3.��J���I�Ÿ��r��%2d��",d);      //��ܼ��I�Ÿ����X��
	printf("\n\t4.��J����r��%2d��",e); //��ܱ���r�����X��
	printf("\n\t5.��J��L�r��%2d��",h); //��ܨ�L�r�����X��  
	printf("\n\t6.��J���Ħr��%2d��\n\n\t\t\t    ",a+b+c+d+e+h); //��ܨ�L���䦳�X�� 
	system("pause");return 0; 
}
	
