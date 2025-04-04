/*==========================================================================================================================*/
/*(1)画面に「*** 数当てゲーム(レベル1)*** (改行)回答のチャンスは4回までです(改行)1桁の数を入力してください＞」と表示する。  */
/*(2)int型の変数answerを準備し、0~9のランダムな数を格納する。																*/
/*(3)入力された数が正解と一致したら、当たりのメッセージと何回目の入力で当たったかを表示してゲームを終了する。				*/
/*(4)入力された数が正解と一致しなければ、入力された数と正解の大小を比較し、その結果をヒントとして表示する。				    */
/*(5)4回目の入力で正解しなければ、正解を表示してゲームを終了する。														    */
/*==========================================================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int user;     /*入力する値*/
	int answer;   /*正解の値*/
	int i = 0;    /*ループインデックス*/
	int count;    /*挑戦可能回数*/


	srand((unsigned)time(NULL));

	answer = rand() % 10;                                          /*1〜9のランダムな数を格納*/

	for (int i=0; i < 4; i++) {
		scanf("%s", user);
		count=i;
	}
	if (answer == user) {                                          /*正解した場合の評価*/
		printf("当たり。%d回目で正解\n", count);
	}
	else if (answer >= user) {                                     /*不正解の場合の評価*/
		printf("入力した値は正解の値より大きいです\n");
	}
	else if (answer <= user) {
		printf("入力した値は正解の値より小さいです\n");
	}
	else if (answer != user && count == 4) {                       /*不正解かつ4回外れた場合の評価*/
		printf("正解の値は%dです。\n", answer);
	}
	else {/*do nothing */}

	return 0;
}
