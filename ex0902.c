/* ��u�@�� 40618119 �I�稶*/
/* ex0901 �w�j�ƧǪk*/ 
#include <stdio.h>
int main() 
{
	int i,j,a,temp=0;
	printf("�п�J�@�ӥ���ơG"); scanf("%d",&a); //��J�n�X�Ӥ�� 
	printf("�п�J%d�Ӿ�ƭȡG",a);
	int n[a];
	for(i=1;i<=a;i++)
	{	scanf("%d",&n[i]); }
	printf("�Ƨǫe�ƭȬ��G");
	for(i=1;i<=a;i++){printf("%d ",n[i]);}
	for(j=a;j>=1;j--)
	{
		for(i=1;i<=j-1;i++)
		if(n[i]>n[i+1])
		{
			temp=n[i+1];
			n[i+1]=n[i];
			n[i]=temp;
		}
	}
	printf("\n�Ƨǫ�ƭȬ��G");
	for(i=1;i<=a;i++){ printf("%d ",n[i]);}
}
