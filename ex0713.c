/* ��u�@�� 40618119 �I�稶*/
/* ex0713 �P�_�r�������Φ��� */ 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter[255];
	int i=1,j=1,a=0,b=0,c=0,d=0,e=0,h=0;
	int digit[255], upper[255], lower[255], punct[255], cntrl[255], celse[255];
	printf("�P�_�r�������A��ESC��i���}(���w100��)\n\n�п�J���զr��:");
	for(i=1;i<101;i++){
	    enter[i]=getche();  //��J 
		if(enter[i]==27) { break; }  //�p�G����ESC�N���} 
		else if(isdigit(enter[i])) //�P�_�O�_�Ʀr0~9 
		{ a++; digit[a] = enter[i];}    
		else if(isalpha(enter[i])) //�P�_�O�_�^�� 
		{   
			if(isupper(enter[i])) { b++; upper[b]=enter[i];}//�P�_�j�g�r��
		    else{ c++; lower[c]=enter[i];} //�P�_�p�g�r��
		}
		else if(ispunct(enter[i])) //�P�_���I�Ÿ�
		{ d++;punct[d]=enter[i];}
		else if(iscntrl(enter[i])) //�P�_����r��
		{ e++;cntrl[e]=enter[i];}
		else { h++;celse[h]=enter[i];} //��L����
	}
	for(j=0;j<=a;j++)
	{j==0? printf("\n\n��J0~9�Ʀr%2d��\n�䤤������O��:",a):printf("%2c",digit[j]);} //��ܼƦr���X��
   	for(j=0;j<=b;j++)
	{j==0? printf("\n��J�j�g�r��%2d��\n�䤤������O��:",b):printf("%2c",upper[j]);} //��ܤj�g�r�����X�� 
   	for(j=0;j<=c;j++)
	{j==0? printf("\n��J�p�g�r��%2d��\n�䤤������O��:",c):printf("%2c",lower[j]);} //��ܤp�g�r�����X�� 
	for(j=0;j<=d;j++)
	{j==0? printf("\n��J���I�r��%2d��\n�䤤������O��:",d):printf("%2c",punct[j]);} //��ܼ��I�Ÿ����X�� 
	for(j=0;j<=e;j++)
	{j==0? printf("\n��J����r��%2d��",e):printf("%2c",cntrl[j]);}  //��ܱ���r�����X�� 
	for(j=0;j<=h;j++)
	{j==0? printf("\n��J��L����%2d��",h):printf("%2c",celse[j]);} //��ܨ�L���䦳�X�� 
}
	
