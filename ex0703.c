/* ex0703 反轉數字*/ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{  
   int s=1,enter,replace; //enter為輸入; replace為取代 ; 
   while(s!=0) //讓程式指執行一次 
   {
      do{
   	        scanf("%d",&enter);   //輸入數值 
        }while(enter<=0);  //必須輸入大於0的正整數 
        
		printf("%d之反即為",enter);
        
		while(enter!=0) //將正整數倒過來輸出 
        {
            replace = enter%10;  //計算餘數 
		    enter /= 10;    //把結果設回給enter 
			printf("%d",replace); 
        }
        s=enter;  
   }printf("\n"); 
   system("PAUSE");	
   return 0;
}
