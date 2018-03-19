/* ex0603 璸衡羱*/ 
/* 戈ヒ 40618119  琁风ǘ */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,name[4];  //i﹍;name基 
  float Code[4],a,b,c; // Code[4]璸衡基,ゑ耕珿倒3虫 
  for(i=0;i<3;i++)  
  {
  	  scanf("%d",&name[i]); //块基 
	  if(name[i]<61) //才60基 
	  {  
	     a = name[i]*75;  //a60基衡Α 
	     Code[i]=a;  //璸衡基 
	  }
	  else if(name[i]>60 && name[i]<76) //才60~75基 
	  {  
	  	 a = 60*75;  //a60基衡Α 
	  	 b = (name[i]-60)*75*1.25;  //b60~75基衡ΑΙ埃60玡基笲衡 
		 Code[i]=a+b;	//璸衡基	     
	  }
	  else if(name[i]>75) //才75基  
	  {  a = 60*75;    //a60基衡Α 
		 b = 15*75*1.25;   //b60~75基衡Α 
		 c = (name[i]-75)*75*1.75; //c75基衡ΑΙ埃75玡基笲衡
		 Code[i]=a+b+c; //璸衡基 
	  }
  }
  for(i=0;i<3;i++)  //璸衡基 
  {
  	printf("%d羱%.0fじ\n",name[i],Code[i]); // 
  }   
  system("PAUSE");	
  return 0;
}
