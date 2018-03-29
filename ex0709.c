/* ex0709 1000範圍內的n1或n2整除*/
/* 資工一甲 40618119 施瑞邑*/ 
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int i,j=0,n1,n2,sum=0;  //i為初始值, j判斷20為一列, n1或n2為被整除的值代號, sum總和 
    printf("求 1 到 1000 可以被n1或n2整除的正整數\n");
    scanf("%d %d",&n1,&n2); // 輸入n1,n2的數值 
    printf("請輸入1到1000的整數 n1:%d ， n2:%d\n",n1,n2); // 顯示n1和n2的值 
    for(i=1;i<1001;i++) //1~1000的迴圈 
    {
    	if(i%n1==0 || i%n2==0) //判斷被n1或n2整除的值 
    	{
    		sum+=i; j++; //sum總和的累加，j是為了判斷幾個 
    		printf("%3d ",i); //數值 
    		if(j%20==0)  //20個換行 
    		{ printf("\n");}   
		}
	}
	printf("\n由 1 到 1000 有 %d 個整數可以被%d或%d整除！\n",j,n1,n2); //顯示有幾個被整除 
	printf("總和：%d\n",sum); //顯示總和 
}	
