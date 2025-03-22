//	#include<stdio.h>
//	#include<stdlib.h>
//	#include<time.h>
//
//	int main(void)
//	{
//		enum{DAIKICHI =1,CHUKICHI =2,KICHI =3,KYO =4};
//
//		printf("Ç†Ç»ÇΩÇÃâ^ê®ÇêËÇ¢Ç‹Ç∑\n");
//		srand((unsigned)time(NULL));
//
//		int fortune = rand() % 4 + 1;
//
//		switch (fortune) {
//
//		case DAIKICHI:
//			printf("ëÂãg\n");
//			break;
//
//		case CHUKICHI:
//			printf("íÜãg\n");
//			break;
//
//		case KICHI:
//			printf("ãg\n");
//			break;
//
//		default:
//			printf("ã•\n");
//			break;
//		}
//		return 0;
//	}