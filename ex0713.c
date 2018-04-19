/* 資工一甲 40618119 施瑞邑*/
/* ex0713 判斷字元種類及次數 */ 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter[255];
	int i=1,j=1,a=0,b=0,c=0,d=0,e=0,h=0;
	int digit[255], upper[255], lower[255], punct[255], cntrl[255], celse[255];
	printf("判斷字元種類，按ESC鍵可離開(限定100次)\n\n請輸入測試字元:");
	for(i=1;i<101;i++){
	    enter[i]=getche();  //輸入 
		if(enter[i]==27) { break; }  //如果按到ESC就離開 
		else if(isdigit(enter[i])) //判斷是否數字0~9 
		{ a++; digit[a] = enter[i];}    
		else if(isalpha(enter[i])) //判斷是否英文 
		{   
			if(isupper(enter[i])) { b++; upper[b]=enter[i];}//判斷大寫字母
		    else{ c++; lower[c]=enter[i];} //判斷小寫字母
		}
		else if(ispunct(enter[i])) //判斷標點符號
		{ d++;punct[d]=enter[i];}
		else if(iscntrl(enter[i])) //判斷控制字元
		{ e++;cntrl[e]=enter[i];}
		else { h++;celse[h]=enter[i];} //其他按鍵
	}
	for(j=0;j<=a;j++)
	{j==0? printf("\n\n輸入0~9數字%2d次\n其中按鍵分別為:",a):printf("%2c",digit[j]);} //顯示數字有幾次
   	for(j=0;j<=b;j++)
	{j==0? printf("\n輸入大寫字母%2d次\n其中按鍵分別為:",b):printf("%2c",upper[j]);} //顯示大寫字母有幾次 
   	for(j=0;j<=c;j++)
	{j==0? printf("\n輸入小寫字母%2d次\n其中按鍵分別為:",c):printf("%2c",lower[j]);} //顯示小寫字母有幾次 
	for(j=0;j<=d;j++)
	{j==0? printf("\n輸入標點字母%2d次\n其中按鍵分別為:",d):printf("%2c",punct[j]);} //顯示標點符號有幾次 
	for(j=0;j<=e;j++)
	{j==0? printf("\n輸入控制字元%2d次",e):printf("%2c",cntrl[j]);}  //顯示控制字元有幾次 
	for(j=0;j<=h;j++)
	{j==0? printf("\n輸入其他按鍵%2d次",h):printf("%2c",celse[j]);} //顯示其他按鍵有幾次 
}
	
