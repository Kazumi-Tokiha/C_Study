
//タカシくんは、もらったお年玉3000円をすべて使って、1個120円のリンゴまたは1個六個入り400円のミカンのどちらかを買おうか迷っています。
//次の要件を満たすプログラムを作成してください。

//・2つの果物について、それぞれ最大いくつ買えるかを計算する。ただし、割り算は使わないこと。
//・次の例を参考に、それぞれの果物を買える数を表示する。＊は購入できる果物の数を表し、XとYには余るお金を出力する。
//⇒リンゴ***** 余りはX円
//⇒ミカン***** 余りはY円

#include<stdio.h>

int main()

{
	int rng = 120;
	int mkn = 400;
	int mony = 3000;
	int rng_count = 0;
	int mkn_count = 0;

	/*リンゴの最大個数を求める式*/
	while (rng<3000) {
		rng *=2;
		rng_count++;
	}
	/*ミカンの最大個数を求める式*/
	while (mkn < 3000) {
		mkn *= 2;
		mkn_count++;
	}
	printf("リンゴ");
	for (int i = 0; i < rng_count; i++) {
		printf("%d個買えた。\n", rng_count);

		printf("ミカン");
		for (int i = 0; i < mkn_count; i++) {
			printf("%d個買えた。\n", mkn_count);
		}
	}
	return 0;
}
