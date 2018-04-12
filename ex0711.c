/* ex0711 完美數*/
/* 資工一甲 40618119  施瑞邑 */
#include <stdio.h>
int main()
{
  	int n,i,j,sum;  //n為範圍值,sum存取單位
	printf("輸入範圍值："); 
    scanf("%d",&n); //輸入範圍值
	printf("%d的完美數：",n);    
    for(i=1;i<=n;i++)     
    {    
        sum = 0; //讓sum歸零在取其他完美數 
        for(j=1;j<i;j++)     
        {     
            if(i%j==0) //符合就存取 
            {sum+=j;}  
        }     
		if(sum==i){printf("%d ",i);} //判斷是否完美數，是顯示出來     
    }      	 
}
