/* ��u�@�� 40618119 �I�稶*/
/* ex0901 �G�Z�����Ҥ��Ʋέp*/ 
#include <stdio.h>
int main() 
{
	int 
	i,j, 		//�j�� 
	enter[i]; 	//��J 
	float 
	nop[i], 	//�H�� 
	total[i], 	//�`�� 
	tag[i], 	//�`���� 
	pass[i],	//�ή�H�� 
	age[i], 	//�ή�ʤ��� 
	nopass[i], 	//���ή�H�� 
	average[i]; //���ή�ʤ��� 
	char    
	name1[20]="��u�@��",
	name2[20]="��u�@�A",
	name3[20]="�X    �p",
	sam1[100]="+--------+-----+-----+-------+--------------+--------------+",
	sam2[100]="+========+=====+=====+=======+==============+==============+";
	
	printf("�ЧQ����L�s���J�G�Z�P�ǸӬ�����Ҥ����Z\n");
	for(i=1;i<3;i++) //�u����Z�G�u�ݭn�j��⦸ 
	{ 
		nop[i]=0;  	 //�H�ƪ�l�Ȭ�0 
		total[i]=0;  //�`����l�Ȭ�0 
		pass[i]=0;   //�ή�H�ƪ�l�Ȭ�0 
		nopass[i]=0;  //���ή�H�ƪ�l�Ȭ�0 */ 
		printf("%s��J���Z(-1������)\n",j==1? name1:name2); //��ܯZ�� 
		for(j=1;j<=i;j++)   //�@�ӯZ�Ť��ƪ���J�j�� 
	    {	
			while(enter[j]!=-1)  // �P�_�O�_���X 
	        {
	        	scanf("%d",&enter[j]);   	//��J�P�Ǥ��� 
	        	if(enter[j] != -1)   		//��J-1�������} 
			    {		    	
			        nop[j]++;  				//��J�@���H��+1 
					total[j]+=enter[j];   	 //��J�i�`���� 
		            if( enter[j]>=60 && enter[j]<=100 )	//�ή�έp	
					pass[j]++;			
					else nopass[j]++; //���ή�έp   
				}
			}
	    }
	}
	nop[3] = nop[1] + nop[2],  			//�����H�ƲΦX 
	total[3] = total[1] + total[2], 	//�`�@���ƲΦX 
	pass[3] = pass[1] + pass[2], 		//�����ή�H�ƲΦX
	nopass[3] =nopass[1] + nopass[2];  //�������ή�H�ƲΦX
	printf("\t\t\t\t���׬�ޤj�Ǹ�u�t\n\t\t\t\t�p����{���]�p(�G)\n");
	printf("\t%s\n",sam1);
	printf("\t|�Z      |�� ��|     |   �`  |     �� ��    |    �� �� ��  |\n");
	printf("\t|      ��|�H ��|�` ��|��   ��|�H �� �� �� ��|�H �� �� �� ��|\n");
	for(i=1;i<5;i++)  //��ܰѼ� 
	{ 
		printf("\t%s\n",i%2==0? sam1:sam2); //�P�_�n�ƦC�覡
		if(i<4)   
		{
			printf("\t|%4s|%5.0f|%5.0f|%7.2f|%3.0f�H %7.1f%%|%3.0f�H %7.1f%%|\n",  
			i==1? name1 : i==2? name2 : name3, //�P�_��ܦr�� 
			nop[i],   				//���O�H����� 
			total[i],  				//���O�`����� 
			total[i]/nop[i],		//�`�����⦡�P���O�`������� 
			pass[i],                //���O�ή�H����� 
			pass[i]/nop[i]* 100,	//�ή�ʤ���B���P�ή�ʤ������ 
			nopass[i],    //        //���O���ή�H����� 
			nopass[i]/nop[i] *100 );//���ή�ʤ���B���P���ή�ʤ������ 
		}
	}
}