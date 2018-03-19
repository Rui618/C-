/* ex0601 選擇結構應用 */
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int i,j,enter[6],sum; // i ; j; 為for的初始單位，enter[6]5個位子用來區放數字
   float total=0;  //總數，因平均後會有小數點，所以用浮點數 
   for(i=1;i<=5;i++)
   {
      scanf("%d",&enter[i]); //以陣列設enter有5個數字，分別區放 
      total+=enter[i]; // total存放數字，總和位子 
    }
   for(j=1;j<=5;j++)  //顯示我輸入順序的數字 
   {
        printf("第%d個數字:%d\n",j,enter[j]);
   }
   for(i=1;i<=5;i++) //泡沫排序 
   {
   		for(j=1;j<i+1;j++)
   		{
   		   	if(enter[j]<enter[i])//前後兩個數字比較， 較大保留較小在與後面比較 
   		   	{
   		   	   sum=enter[j];
			   enter[j]=enter[i];
			   enter[i]=sum;
			}
	   	}
   }
   printf("(a)總分:%.0f\n",total);   
   printf("(b)總平均:%0.1f\n",total/5); //總數除輸入次數 
   printf("(c)最大值:%d\n",enter[1]);   
   printf("(d)最小值:%d\n",enter[5]);
   printf("(e)最中值:%d\n",enter[3]);  
  system("PAUSE");	
  return 0;
}
