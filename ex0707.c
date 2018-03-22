/* 資工一甲 40618119 施瑞邑*/
/* ex0707 判斷字元種類 */ 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter; //輸入 
	int digit=0, upper=0, lower=0, punct=0, cntrl=0, celse=0;
	printf("判斷字元種類，按ESC鍵可離開\n");
	do{
		printf("\n請輸入測試字元：");
	    enter=getche();  //輸入 
		if(enter==27) //如果按到ESC就離開 
		{ break; } 
		else if(isdigit(enter)) //判斷是否數字0~9 
		{ digit++; }    
		else if(isalpha(enter)) //判斷是否英文 
		{   
			if(isupper(enter)) //判斷大寫字母
		    { upper++; }
		    else               //判斷小寫字母
		    { lower++; }
		}
		else if(ispunct(enter)) //判斷標點符號
		{ punct++; }
		else if(iscntrl(enter)) //判斷控制字元
		{ cntrl++; }
		else
		{ celse++; } //其他按鍵
	}while(1);
    printf("\n\n輸入0~9數字 %d 次.\n",digit);   //顯示數字有幾次 
    printf("輸入大寫字母 %d 次.\n",upper);     //顯示大寫字母有幾次 
    printf("輸入小寫字母 %d 次.\n",lower);    //顯示小寫字母有幾次
	printf("輸入標點符號 %d 次.\n",punct);    //顯示標點符號有幾次
	printf("輸入控制字元 %d 次.\n",cntrl);    //顯示控制字元有幾次
	printf("輸入其他按鍵 %d 次.\n\n",celse);   //顯示其他按鍵有幾次	
}	
