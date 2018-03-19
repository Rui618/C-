/* ex0705 平行四邊形*/ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{  
    int a,b,i,j;  //a為主迴圈; b為空白; i為加; j為減 
    for(a=0;a<6;a++) //決定以下總次數 
    {
	    for(b=6;b>a;b--) //空白，從6往下減
	    {printf(" ");}
		if(a%2!=0) //如果b是奇數 
		{
	       for(i=1;i<8;i++)  //執行加的運算式 
	       {printf("%d",i);}
	    }else   //如果a是偶數 
		{
	       for(j=7;j>0;j--) //執行減的運算式 
	       {printf("%d",j);}
		}printf("\n");  //以上執行完一次後換行，再繼續 
	}
}
