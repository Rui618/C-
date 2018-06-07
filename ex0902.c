/* 資工一甲 40618119 施瑞邑*/
/* ex0901 泡沫排序法*/ 
#include <stdio.h>
int main() 
{
	int i,j,a,temp=0; 		   //i,j迴圈; a參值; temp空值 
	printf("請輸入一個正整數："); scanf("%d",&a); //輸入要幾個比較 
	printf("請輸入%d個整數值：",a); 
	int n[a];    				//n[a]輸入的空間 
	for(i=1;i<=a;i++)
	{	scanf("%d",&n[i]); } 	//輸入參值 
	printf("排序前數值為：");   //顯示排序前的數值
	for(i=1;i<=a;i++){printf("%d ",n[i]);}
	for(j=a;j>=1;j--) 		    //泡沫排序法 
	{
		for(i=1;i<=j-1;i++)
		if(n[i]>n[i+1])        //前後比較排序 
		{
			temp=n[i+1];    
			n[i+1]=n[i];
			n[i]=temp;
		}
	}
	printf("\n排序後數值為：");  //顯示排序後的數值 
	for(i=1;i<=a;i++){ printf("%d ",n[i]);}
}
