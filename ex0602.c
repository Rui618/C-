/* ex0602 �^�嵥�� */ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n; //���Z�N�� 
  char name[10]; //�m�W�N�� 
  scanf("%s %d",&name,&n); //��J�m�W�P���Z 
  if(n<=100 && n>=0) //��J���n�ŦX0~100�����Z 
  {
  	printf("�m�W:%s ���妨�Z�G%d �^�嵥�šG",name,n); //��ܩm�W�P���妨�Z 
  	n=n/10;      // ���Z���Q���F���U��
  	switch(n)   //���n�Q���᪺�ҲŦX��l
  	{
  		case 10: //�p�G�ʦ쬰10 
		case 9:  //�p�G�Q�쬰9 
			printf("A\n"); //���Z���Ŭ�A
			break;   //�ŦX���X 
	    case 8:  //�p�G�Q�쬰8
	    	printf("B\n"); //���Z���Ŭ�B
			break;
	    case 7:  //�p�G�Q�쬰7
	    	printf("C\n"); //���Z���Ŭ�C
			break;
	    case 6:  //�p�G�Q�쬰6
	    	printf("D\n"); //���Z���Ŭ�D
			break;
	    case 5:  //�p�G�Q�쬰5
	    	printf("E\n"); //���Z���Ŭ�E
			break;		
	}
  }
  system("PAUSE");	
  return 0;
}
