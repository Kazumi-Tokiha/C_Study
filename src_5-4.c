//	#include<stdio.h>
//	#include<stdlib.h>
//	#include<time.h>
//
//	int main(void)
//	{
//		enum{DAIKICHI =1,CHUKICHI =2,KICHI =3,KYO =4};
//
//		printf("あなたの運勢を占います\n");
//		srand((unsigned)time(NULL));
//
//		int fortune = rand() % 4 + 1;
//
//		switch (fortune) {
//
//		case DAIKICHI:
//			printf("大吉\n");
//			break;
//
//		case CHUKICHI:
//			printf("中吉\n");
//			break;
//
//		case KICHI:
//			printf("吉\n");
//			break;
//
//		default:
//			printf("凶\n");
//			break;
//		}
//		return 0;
//	}