/* 資工一甲 40618119 施瑞邑*/
/* ex0714 期末考-考題*/ 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
	char enter[255],sum[20];
	int n,i=1,j=1,a=0,b=0,c=0,d=0,e=0,h=0,upper[101];
	printf("請輸入你的學號及姓名：");scanf("%d %s",&n,&sum);
	printf("請利用鍵盤連續輸入鍵盤上之任何字母，直至按下Esc鍵後停止\n");
	do{
		printf("\n請輸入鍵盤上之任何字母：");
		enter[i]=getche();  
		if(enter[i]==27) { printf("\bEsc(離開)"); break; }     //如果按到ESC就離開 
		else if(isdigit(enter[i])){a++;}     //判斷是否數字0~9 
		else if(isalpha(enter[i]))       //判斷是否英文 
		{   
			if(enter[i]==65 ||enter[i]==67 ||enter[i]==101) 		  //判斷是否A、C、e的字母 
			{ b++; upper[b]=enter[i];}
			else {c++;}  						//不是算有效字元  
		}
		else if( ispunct(enter[i])){d++;}       //判斷標點符號
		else if(iscntrl(enter[i]))//判斷控制字元
		{
			e++;
			if(enter[i]==9){printf("\b\b\b\b\b\b\b\btab");}
			if(enter[i]==8){printf(" backspace");}
		}	    
		else{h++;if(enter[i]==32)printf("\b空白鍵");}		//其他按鍵
		i++;          
    }while(i!=100);
    printf("\n\n\t\t\t\t資訊工程系");printf("\n\t\t\t\t__________");
    printf("\n\t\t\t\/\"字元種類及次數統計表\'\\");printf("\n\t\t\t=========================");
	printf("\n\t學號：%d\n\t姓名：%s",n,sum); 
	printf("\n\t1.輸入0~9數字%2d次",a);        //顯示數字有幾次
	printf("\n\t2.輸入大寫字母A、C字元與小寫英文e字元%2d次",b);  //顯示A、C、e的字母有幾次
   	if(b!=0)
	{   
		for(j=0;j<=b;j++)
		{j==0?printf("\n\t  其中按鍵依次為"):printf("%2c",upper[j]);} //A、C、e顯示輸入排序 
	}  
   	printf("\n\t3.輸入標點符號字幕%2d次",d);      //顯示標點符號有幾次
	printf("\n\t4.輸入控制字元%2d次",e); //顯示控制字元有幾次
	printf("\n\t5.輸入其他字元%2d次",h); //顯示其他字元有幾次  
	printf("\n\t6.輸入有效字元%2d次\n\n\t\t\t    ",a+b+c+d+e+h); //顯示其他按鍵有幾次 
	system("pause");return 0; 
}
	
