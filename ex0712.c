/* ex0712 繩子不能低於5 */
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  	int i=0; //計算天數代號 
  	double n;   //輸入長度代號 
  	printf("請輸入長度：");
    scanf("%lf",&n); //輸入長度 
	while(n>=5)  //判斷條件，不能低於5 
	{  
	    n=n/2;   //一值除到低於5 
		i++;     //除一次增加一次 
	}printf("總共：%d天",i);  //顯示天數 
       	 
}
