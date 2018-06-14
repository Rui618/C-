/* 資工一甲 40618119 施瑞邑*/
/*ex0903 成績泡沫排序 */ 
#include <stdio.h>
int main()
{
   char 
   name[20][20],//姓名 
   zero[1][20], //空字串
   s1[100]={"---------------------------------------"},
   s2[100]={"|姓  名|國 文|計 程|總 分|總平均|名 次|"}; 
   float 
   a[11], //國文成績 
   b[11], //計程成績 
   c[11], //總分 
   d[11], //總平均  
   temp=0; //空值 
   int 
   i,j,n, //迴圈 
   s=1;  //名次  
   for(i=1;i<11;i++)
   {
       printf("請輸入%d位姓名：",i); scanf("%s",&name[i]); //輸入姓名 
       printf("請輸入%s的國文與計程成績：",name[i]); scanf("%f %f",&a[i],&b[i]); //輸入成績 
       c[i] = a[i] + b[i]; //總分計算 
       d[i] = c[i]/2;     //總平均 
   }
   for(i=10;i>=1;i--)   //成績排序 
   {
       for(j=1;j<=i-1;j++) 
       if(d[j] < d[j+1])   //總平均當名次排序依據 
       {
           temp = a[j+1]; a[j+1] = a[j]; a[j] = temp;  
           temp = b[j+1]; b[j+1] = b[j]; b[j] = temp;
           temp = c[j+1]; c[j+1] = c[j]; c[j] = temp;
           temp = d[j+1]; d[j+1] = d[j]; d[j] = temp;
           for(n=0;n<20;n++)  //字串的空間 
           {
              zero[1][n] = name[j+1][n];
              name[j+1][n] = name[j][n];
              name[j][n] = zero[1][n];           
           }
       }
   } 
   printf("\n\t\t\t%s\n\t\t\t%s\n\t\t\t%s\n",s1,s2,s1);
   for(i=1;i<11;i++) //顯示結果 
   {  
       printf("\t\t\t| %4s | %3.0f | %3.0f | %3.0f | %5.1f| %2d  |\n", 
       name[i], a[i], b[i], c[i], d[i], s++);
       printf("\t\t\t%s\n",s1);
   }       
}
