/* 資工一甲 40618119 施瑞邑*/
/* ex0706 兩顆骰子猜數字 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //亂數種子 
int main() 
{
	int A_comp,B_comp,sum,enter,m=0; //A_comp 電腦1; B_comp 電腦2; sum 總和;enter 輸入 
 	srand(time(NULL));   //亂數  
	do{
		if(m!=0) //如果輸入錯誤超過一次執行內容 
		{printf("請你再輸入一個\n");} 
		printf("請輸入一個整數介於(2~12)\n");
	 	printf("你猜的數字為：");
		scanf("%d",&enter); //輸入
		m++; //判斷變數 
	}while(enter<2 || enter>12);
	    A_comp=rand()%6+1; //電腦１號 
     	B_comp=rand()%6+1; //電腦２號
		sum=A_comp+B_comp; //總和 
 		printf("電腦骰子１顯示的數字為：%d\n",A_comp); //顯示電腦１的號碼 
 		printf("電腦骰子２顯示的數字為：%d\n",B_comp); //顯示電腦２的號碼
 		printf("２只電腦色子的總和為：%d\n",sum); //顯示電腦１、２的總和 
 		printf("%s\n",enter==sum? "恭喜,你答對了\n":"對不起,你答案錯了\n");
 		//三元; 如果符合就答對,否則就錯誤 
}	
