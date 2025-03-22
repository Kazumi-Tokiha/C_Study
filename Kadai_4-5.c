//while文を使って、次の内容のプログラムを作成してください。
//
//(1)int型の変数tempを宣言し、30で初期化する。
//(2)画面に「現在の設定温度：」の文言と、変数tempの値を表示する。
//(3)画面に「暑いですか？Yes = 1 No = 0」と表示し、入力を受け付ける。
//(4)0が入力されたら「設定を終了します」と表示して処理を終了する。
//(5)1が入力されたら変数tempの値から1を引き、(2)の処理へ戻る。
	

//	#include<stdio.h>
//	#include<stdbool.h>
//	#include<stdlib.h>
//
//	typedef char String[1024];
//
//	int main(void)
//
//	{
//		int temp = 30;
//		int User;
//
//		String User;
//		printf("現在の設定温度：%d", temp);
//		printf("暑いですか？Yes=1 No=0\n");
//		scanf("%s",User);
//
//		int Yes = atoi(User);
//
//		while(Yes == 1) {
//	
//			temp--;
//		}
//
//		printf("設定を終了します\n");
//
//		return 0;
//	}