/* ex0601 ��ܵ��c���� */
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int i,j,enter[6],sum; // i ; j; ��for����l���Aenter[6]5�Ӧ�l�ΨӰϩ�Ʀr
   float total=0;  //�`�ơA�]������|���p���I�A�ҥH�ίB�I�� 
   for(i=1;i<=5;i++)
   {
      scanf("%d",&enter[i]); //�H�}�C�]enter��5�ӼƦr�A���O�ϩ� 
      total+=enter[i]; // total�s��Ʀr�A�`�M��l 
    }
   for(j=1;j<=5;j++)  //��ܧڿ�J���Ǫ��Ʀr 
   {
        printf("��%d�ӼƦr:%d\n",j,enter[j]);
   }
   for(i=1;i<=5;i++) //�w�j�Ƨ� 
   {
   		for(j=1;j<i+1;j++)
   		{
   		   	if(enter[j]<enter[i])//�e���ӼƦr����A ���j�O�d���p�b�P�᭱��� 
   		   	{
   		   	   sum=enter[j];
			   enter[j]=enter[i];
			   enter[i]=sum;
			}
	   	}
   }
   printf("(a)�`��:%.0f\n",total);   
   printf("(b)�`����:%0.1f\n",total/5); //�`�ư���J���� 
   printf("(c)�̤j��:%d\n",enter[1]);   
   printf("(d)�̤p��:%d\n",enter[5]);
   printf("(e)�̤���:%d\n",enter[3]);  
  system("PAUSE");	
  return 0;
}
