/* ��u�@�� 40618119 �I�稶*/
/*ex0903 ���Z�w�j�Ƨ� */ 
#include <stdio.h>
int main()
{
   char 
   name[20][20],//�m�W 
   zero[1][20], //�Ŧr��
   s1[100]={"---------------------------------------"},
   s2[100]={"|�m  �W|�� ��|�p �{|�` ��|�`����|�W ��|"}; 
   float 
   a[11], //��妨�Z 
   b[11], //�p�{���Z 
   c[11], //�`�� 
   d[11], //�`����  
   temp=0; //�ŭ� 
   int 
   i,j,n, //�j�� 
   s=1;  //�W��  
   for(i=1;i<11;i++)
   {
       printf("�п�J%d��m�W�G",i); scanf("%s",&name[i]); //��J�m�W 
       printf("�п�J%s�����P�p�{���Z�G",name[i]); scanf("%f %f",&a[i],&b[i]); //��J���Z 
       c[i] = a[i] + b[i]; //�`���p�� 
       d[i] = c[i]/2;     //�`���� 
   }
   for(i=10;i>=1;i--)   //���Z�Ƨ� 
   {
       for(j=1;j<=i-1;j++) 
       if(d[j] < d[j+1])   //�`������W���ƧǨ̾� 
       {
           temp = a[j+1]; a[j+1] = a[j]; a[j] = temp;  
           temp = b[j+1]; b[j+1] = b[j]; b[j] = temp;
           temp = c[j+1]; c[j+1] = c[j]; c[j] = temp;
           temp = d[j+1]; d[j+1] = d[j]; d[j] = temp;
           for(n=0;n<20;n++)  //�r�ꪺ�Ŷ� 
           {
              zero[1][n] = name[j+1][n];
              name[j+1][n] = name[j][n];
              name[j][n] = zero[1][n];           
           }
       }
   } 
   printf("\n\t\t\t%s\n\t\t\t%s\n\t\t\t%s\n",s1,s2,s1);
   for(i=1;i<11;i++) //��ܵ��G 
   {  
       printf("\t\t\t| %4s | %3.0f | %3.0f | %3.0f | %5.1f| %2d  |\n", 
       name[i], a[i], b[i], c[i], d[i], s++);
       printf("\t\t\t%s\n",s1);
   }       
}
