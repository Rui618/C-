/* ex0709 1000�d�򤺪�n1��n2�㰣*/
/* ��u�@�� 40618119 �I�稶*/ 
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int i,j=0,n1,n2,sum=0;  //i����l��, j�P�_20���@�C, n1��n2���Q�㰣���ȥN��, sum�`�M 
    printf("�D 1 �� 1000 �i�H�Qn1��n2�㰣�������\n");
    scanf("%d %d",&n1,&n2); // ��Jn1,n2���ƭ� 
    printf("�п�J1��1000����� n1:%d �A n2:%d\n",n1,n2); // ���n1�Mn2���� 
    for(i=1;i<1001;i++) //1~1000���j�� 
    {
    	if(i%n1==0 || i%n2==0) //�P�_�Qn1��n2�㰣���� 
    	{
    		sum+=i; j++; //sum�`�M���֥[�Aj�O���F�P�_�X�� 
    		printf("%3d ",i); //�ƭ� 
    		if(j%20==0)  //20�Ӵ��� 
    		{ printf("\n");}   
		}
	}
	printf("\n�� 1 �� 1000 �� %d �Ӿ�ƥi�H�Q%d��%d�㰣�I\n",j,n1,n2); //��ܦ��X�ӳQ�㰣 
	printf("�`�M�G%d\n",sum); //����`�M 
}	
