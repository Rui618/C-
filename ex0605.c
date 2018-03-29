/* ex0605 計算稅金*/ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int income,tax,discount=0; //income輸入金額,tax稅金,discount差額; 
    float taxrate=0.0; //taxrate稅額 
    printf("請輸入綜合所得淨額：");scanf("%d",&income);//輸入 
    if(income>=0 && income<370001) //範圍0~370000  
    {
        discount=0; taxrate=0.06;	//稅額是6%  
  	}else if(income>370000 && income<990001) //範圍370000~990000
    {
        discount=25900; taxrate=0.13; //稅額是13%
    }else if(income>990000 && income<1980001) //範圍990000~1980000
    {
        discount=105100; taxrate=0.21; //稅額是21%
    }else if(income>1980000 && income<3720001) //範圍1980000~3720000  
    {
        discount=283300; taxrate=0.3;  //稅額是30%
    }else if(income>3720000) //範圍3720000以上 
    {
    	discount=655300; taxrate=0.4;  //稅額是40%
	}else
	{
		printf("  請輸入大於等於0的數值!!\n\n");
		system("PAUSE");
	}
	tax = income * taxrate; //計算稅金 
  	printf("\n  綜合所得淨額： %d 元\n",income); //顯示淨額 
 	printf("  稅        額： %2.0f ％\n",taxrate*100); //顯示稅額 
  	printf("  --------------------\n");
 	printf("  稅        金： %d 元\n",tax);  //顯示稅金 
  	printf("  累 進  差 額： %d 元\n",discount);  //顯示差額
  	printf("  --------------------\n");
 	printf("  今年應納稅額： %d 元\n\n  ",tax-discount); //顯示應納稅額 
 	system("PAUSE");
}
