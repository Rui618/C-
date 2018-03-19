/* ex0703 浮點數反轉*/ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
#include <stdlib.h>
int main()   
{
	int i,j;
	char Code[256],sum; //Code輸入，sum放置 
	gets(Code); //輸入 
	for(i=0,j=strlen(Code)-1;i<=j;i++,j--) // strlen(Code)字串長度 
	{
		sum=Code[i];  //前面數字往後面丟置 
		Code[i]=Code[j];
		Code[j]=sum;
    }puts(Code); //輸出 
    system("PAUSE");
	return 0;
}
