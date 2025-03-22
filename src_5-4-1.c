//	#include<stdio.h>
//	#include<stdlib.h>
//	#include<time.h>
//
//	int main(void)
//	{
//		const int DAIKICHI = 1;
//		const int CHUKICHI = 2;
//		const int KICHI = 3;
//		const int KYO = 4;
//
//		printf("Ç†Ç»ÇΩÇÃâ^ê®ÇêËÇ¢Ç‹Ç∑\n");
//
//		srand((unsigned)time(NULL));
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