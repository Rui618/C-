/* ex0702 */ 
/* 戈ヒ 40618119 琁风ǘ */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0,b=0,Code,i,j,sum=0;   //a,b耞才腹Code块i,j﹍sum璸衡 
  scanf("%d",&Code); //块计 
  for(i=1,j=1;i<=Code;i+=2,j++)  /*j安砞癹伴块案计临琌计案计-计+*/ 
   {
       if(j%2==0) //耞琌案计 
	   { 
	   		sum-=i;  //-笲衡 
	   		a+=j;  //耞n玡才腹┮ノ  
	  		printf("-%d",i);  //そΑ 
	   }
	   else //计 
	   {    
	        sum+=i; //+笲衡 
	        b+=j; //耞n玡才腹┮ノ 
	        if(i!=1){printf("+");} //そΑ 
	        printf("%d",i);    
	   }  
   } printf("=%d\n",sum); //块 
   printf("1〃n%d玡才腹琌%s\n2〃sum%d\n",i-2,a>b? "-":"+",sum); 
   /*じ笲衡耞才腹sum笲衡挡狦*/ 
  system("PAUSE");	
  return 0;
}
