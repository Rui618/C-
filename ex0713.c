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
	printf("判斷字元種類，按ESC鍵可離開(限定100次)\n\n請輸入測試字元:\n");
	for(i=1;i<101;i++){
	    enter[i]=getche();  //輸入 
		if(enter[i]==27) { break; }  //如果按到ESC就離開 
		else if(isdigit(enter[i])) //判斷是否數字0~9 
		{ a++; digit[a]=enter[i];}    
		else if(isalpha(enter[i])) //判斷是否英文 
		{   
			if(isupper(enter[i])) { b++; upper[b]=enter[i];}//判斷大寫字母
		    else{ c++; lower[c]=enter[i];} //判斷小寫字母
		}
		else if(ispunct(enter[i])) //判斷標點符號
		{ d++;punct[d]=enter[i];}
		else if(iscntrl(enter[i])) //判斷控制字元
		{ e++;cntrl[e]=enter[i];printf("\n");}
		else 
		{ h++;celse[h]=enter[i];} //其他按鍵
	}
	printf("\n輸入0~9數字%2d次",a);//顯示數字有幾次
	if(a!=0){for(j=0;j<=a;j++){j==0?printf("\n其中按鍵分別為:"):printf("%2c",digit[j]);}} 
	printf("\n輸入大寫字母%2d次",b);//顯示大寫字母有幾次
   	if(b!=0){for(j=0;j<=b;j++){j==0?printf("\n其中按鍵分別為:"):printf("%2c",upper[j]);}}  
   	printf("\n輸入小寫字母%2d次",c);//顯示小寫字母有幾次
	if(c!=0){for(j=0;j<=c;j++){j==0?printf("\n其中按鍵分別為:"):printf("%2c",lower[j]);}}
   	printf("\n輸入標點字母%2d次",d);//顯示標點符號有幾次
	if(d!=0){for(j=0;j<=d;j++){j==0?printf("\n其中按鍵分別為:"):printf("%2c",punct[j]);}}  
	printf("\n輸入控制字元%2d次\n輸入其他按鍵%2d次",e,h);//顯示控制字元有幾次，其他按鍵有幾次 
}
	
