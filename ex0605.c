/* ex0605 �p��|��*/ 
/* ��u�@�� 40618119  �I�稶 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int income,tax,discount=0; //income��J���B,tax�|��,discount�t�B; 
    float taxrate=0.0; //taxrate�|�B 
    printf("�п�J��X�ұo�b�B�G");scanf("%d",&income);//��J 
    if(income>=0 && income<370001) //�d��0~370000  
    {
        discount=0; taxrate=0.06;	//�|�B�O6%  
  	}else if(income>370000 && income<990001) //�d��370000~990000
    {
        discount=25900; taxrate=0.13; //�|�B�O13%
    }else if(income>990000 && income<1980001) //�d��990000~1980000
    {
        discount=105100; taxrate=0.21; //�|�B�O21%
    }else if(income>1980000 && income<3720001) //�d��1980000~3720000  
    {
        discount=283300; taxrate=0.3;  //�|�B�O30%
    }else if(income>3720000) //�d��3720000�H�W 
    {
    	discount=655300; taxrate=0.4;  //�|�B�O40%
	}else
	{
		printf("  �п�J�j�󵥩�0���ƭ�!!\n\n");
		system("PAUSE");
	}
	tax = income * taxrate; //�p��|�� 
  	printf("\n  ��X�ұo�b�B�G %d ��\n",income); //��ܲb�B 
 	printf("  �|        �B�G %2.0f �H\n",taxrate*100); //��ܵ|�B 
  	printf("  --------------------\n");
 	printf("  �|        ���G %d ��\n",tax);  //��ܵ|�� 
  	printf("  �� �i  �t �B�G %d ��\n",discount);  //��ܮt�B
  	printf("  --------------------\n");
 	printf("  ���~���ǵ|�B�G %d ��\n\n  ",tax-discount); //������ǵ|�B 
 	system("PAUSE");
}
