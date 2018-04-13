/* ex0710 養老鼠 */
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h> 
int main()
{
  	int i,j,second,mouse[10];    // i老鼠數量;j月份;second結果;mouse生長的數
	printf("來養老鼠哦(一雙生3隻，三個月後死掉) \n數量：月份 總共\n"); //題目   
	for(i=3;i<13;i++){    //假設3到12隻的不同月份情況 
	    second=i;   mouse[0] = second;   
		for(j=1;j<=10;j++){     //假設1到10月成常情況                   
		mouse[j] = (second/2)*3; second = second + mouse[j]; //一個月量;結果累加;    
		j==3? (second = second - mouse[0]):j>3? (second = second - mouse[j-3]) : (0); //判斷是否在死掉 
		j<6?  printf("%2d:%d %3d隻 ",i,j,second):printf("%2d:%2d %5d隻 ",i,j,second);  // 顯示 
		if(j==10){printf("\n");} //每12個換行 
	    }second = 0;  //歸零 
	}       
    
}                  
