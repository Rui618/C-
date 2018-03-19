/* ex0701*/ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>

int main()
{                                    
   float n,i,sum=0; //n輸入代號，i初始值，sum為運算後存放單位 
   scanf("%f",&n); //輸入數值，要奇數為單位 
   printf("1");  //1為開頭 
   for(i=1;i<=n;i=i+2) //i+2是為了讓他奇數迴圈 
   {
		sum =sum + ( (float)1 / (float)i ); //運算式 
	    if(i!=1) {printf(" + 1/%.0f",i);} //公式 
   }printf(" = %.3f\n",sum);  //結果 
   
  system("PAUSE");	
  return 0;
}
