/* ex0703 ����Ʀr*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{  
   int s=1,enter,replace; //enter����J; replace�����N ; 
   while(s!=0) //���{��������@�� 
   {
      do{
   	        scanf("%d",&enter);   //��J�ƭ� 
        }while(enter<=0);  //������J�j��0������� 
        
		printf("%d���ϧY��",enter);
        
		while(enter!=0) //�N����ƭ˹L�ӿ�X 
        {
            replace = enter%10;  //�p��l�� 
		    enter /= 10;    //�⵲�G�]�^��enter 
			printf("%d",replace); 
        }
        s=enter;  
   }printf("\n"); 
   system("PAUSE");	
   return 0;
}
