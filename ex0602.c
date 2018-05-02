/* ex0602 英文等級 */ 
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
int main()
{
  int n; //成績代號 
  char name[10]; //姓名代號 
  scanf("%s %d",&name,&n); //輸入姓名與成績 
  if(n<=100 && n>=0) //輸入的要符合0~100的成績 
  {
  	printf("姓名:%s 中文成績：%d 英文等級：",name,n); //顯示姓名與中文成績 
  	n=n/10;      // 成績除十為了取各位
  	switch(n)   //選擇n被除後的所符合位子
  	{
  		case 10: //如果百位為10 
		case 9:  //如果十位為9 
			printf("A\n"); //成績等級為A
			break;   //符合跳出 
	    case 8:  //如果十位為8
	    	printf("B\n"); //成績等級為B
			break;
	    case 7:  //如果十位為7
	    	printf("C\n"); //成績等級為C
			break;
	    case 6:  //如果十位為6
	    	printf("D\n"); //成績等級為D
			break;
	    case 5:  //如果十位為5
	    	printf("E\n"); //成績等級為E
			break;	
		default:  //50以下 
			printf("F\n"); //成績等級為F
			break;	
	}
  }
  system("PAUSE");	
  return 0;
}
