/* ex0603 �p����~*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,name[4];  //i��l��;name���� 
  float Code[4],a,b,c; // Code[4]�s��p��᪺����,�T�Ӥ���G��3�ӳ�� 
  for(i=0;i<3;i++)  
  {
  	  scanf("%d",&name[i]); //��J���� 
	  if(name[i]<61) //�ŦX60�H�U������ 
	  {  
	     a = name[i]*75;  //a��60���檺�⦡ 
	     Code[i]=a;  //�s��p��᪺���� 
	  }
	  else if(name[i]>60 && name[i]<76) //�ŦX60~75������ 
	  {  
	  	 a = 60*75;  //a��60���檺�⦡ 
	  	 b = (name[i]-60)*75*1.25;  //b��60~75���檺�⦡�A������60�H�e����A�B�� 
		 Code[i]=a+b;	//�s��p��᪺����	     
	  }
	  else if(name[i]>75) //�ŦX75�H�W������  
	  {  a = 60*75;    //a��60���檺�⦡ 
		 b = 15*75*1.25;   //b��60~75���檺�⦡ 
		 c = (name[i]-75)*75*1.75; //c��75�H�W���檺�⦡�A������75�H�e����A�B��
		 Code[i]=a+b+c; //�s��p��᪺���� 
	  }
  }
  for(i=0;i<3;i++)  //���F�A�s�X�p�⪺���� 
  {
  	printf("%d�p�ɡA�~��%.0f��\n",name[i],Code[i]); //�L�X 
  }   
  system("PAUSE");	
  return 0;
}
