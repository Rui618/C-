/* ex0602 璣ゅ单 */ 
/* 戈ヒ 40618119  琁风ǘ */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n; //Θ罿腹 
  char name[10]; //﹎腹 
  scanf("%s %d",&name,&n); //块﹎籔Θ罿 
  if(n<=100 && n>=0) //块璶才0~100Θ罿 
  {
  	printf("﹎:%s いゅΘ罿%d 璣ゅ单",name,n); //陪ボ﹎籔いゅΘ罿 
  	n=n/10;      // Θ罿埃
  	switch(n)   //匡拒n砆埃┮才
  	{
  		case 10: //狦κ10 
		case 9:  //狦9 
			printf("A\n"); //Θ罿单A
			break;   //才铬 
	    case 8:  //狦8
	    	printf("B\n"); //Θ罿单B
			break;
	    case 7:  //狦7
	    	printf("C\n"); //Θ罿单C
			break;
	    case 6:  //狦6
	    	printf("D\n"); //Θ罿单D
			break;
	    case 5:  //狦5
	    	printf("E\n"); //Θ罿单E
			break;		
	}
  }
  system("PAUSE");	
  return 0;
}
