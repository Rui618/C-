/* ex0710 �i�ѹ� */
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h> 
int main()
{
  	int i,j,second,mouse[10];    // i�ѹ��ƶq;j���;second���G;mouse�ͪ�����
	printf("�Ӿi�ѹ��@(�@����3���A�T�Ӥ�ᦺ��) \n�ƶq�G��� �`�@\n"); //�D��   
	for(i=3;i<13;i++){    //���]3��12�������P������p 
	    second=i;   mouse[0] = second;   
		for(j=1;j<=10;j++){     //���]1��10�릨�`���p                   
		mouse[j] = (second/2)*3; second = second + mouse[j]; //�@�Ӥ�q;���G�֥[;    
		j==3? (second = second - mouse[0]):j>3? (second = second - mouse[j-3]) : (0); //�P�_�O�_�b���� 
		j<6?  printf("%2d:%d %3d�� ",i,j,second):printf("%2d:%2d %5d�� ",i,j,second);  // ��� 
		if(j==10){printf("\n");} //�C12�Ӵ��� 
	    }second = 0;  //�k�s 
	}       
    
}                  
