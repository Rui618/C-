/* ex0711 ������*/
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
int main()
{
  	int n,i,j,sum;  //n���d���,sum�s�����
	printf("��J�d��ȡG"); 
    scanf("%d",&n); //��J�d���
	printf("%d�������ơG",n);    
    for(i=1;i<=n;i++)     
    {    
        sum = 0; //��sum�k�s�b����L������ 
        for(j=1;j<i;j++)     
        {     
            if(i%j==0) //�ŦX�N�s�� 
            {sum+=j;}  
        }     
		if(sum==i){printf("%d ",i);} //�P�_�O�_�����ơA�O��ܥX��     
    }      	 
}
