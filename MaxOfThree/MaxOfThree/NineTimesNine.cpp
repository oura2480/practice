//==========================================================
//	九九表を表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	// ここをコーディングしてください。
	
	//一行目
	printf("   | １ ２ ３ ４ ５ ６ ７ ８ ９\n");
	//二行目
	printf("---+----------------------------\n");

	//三行目以下
	for (int i = 1; i <= 9; i++) {
		//左側2列文の記載
		printf("%2d", i);
		printf(" |");
		//5列目以下の配列
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i * j);			// 改行
		}
		putchar('\n');
	}

	return 0;
}