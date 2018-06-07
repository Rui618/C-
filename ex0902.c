/* 資工一甲 40618119 施瑞邑*/
/* ex0901 泡沫排序法*/ 
#include <stdio.h>
int main() 
{
	int i,j,a,temp=0;
	printf("請輸入一個正整數："); scanf("%d",&a); //輸入要幾個比較 
	printf("請輸入%d個整數值：",a);
	int n[a];
	for(i=1;i<=a;i++)
	{	scanf("%d",&n[i]); }
	printf("排序前數值為：");
	for(i=1;i<=a;i++){printf("%d ",n[i]);}
	for(j=a;j>=1;j--)
	{
		for(i=1;i<=j-1;i++)
		if(n[i]>n[i+1])
		{
			temp=n[i+1];
			n[i+1]=n[i];
			n[i]=temp;
		}
	}
	printf("\n排序後數值為：");
	for(i=1;i<=a;i++){ printf("%d ",n[i]);}
}
