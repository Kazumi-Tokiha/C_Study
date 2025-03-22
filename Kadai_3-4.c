//	#include<stdio.h>
//	#include<stdlib.h>
//
//	typedef char String[1024];
//
//	int main(void)
//
//	{
//		String yearStr;
//		printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください。\n");
//		scanf("%s",yearStr);
//
//		int year = atoi(yearStr);
//		int x;
//		int y;
//		int z;
//
//		x = year - 7;
//		y = year;
//		z = year + 7;
//
//		printf("選んだ数字は%dと%dと%dですね？\n",x,y,z);
//
//		return 0;
//	}