#include<stdio.h>
int main() //입력받은 10개의 숫자를 작은 수부터 차례대로, 중복된 수는 하나만 출력하는 프로그램
{
	int a[10], aa[10]; //a : 입력받을 숫자의 배열, aa : 중복된 수들을 지운 후 출력할때 사용할 배열
	int b, c = 0;  //b : 크기가 작은순으로 정리하기 위한 변수, c : 중복된 수를 지우기 위한 변수
	int i, j;		//반복문에 사용할 변수

	for (i = 0; i < 10; i++)
	{//10개의 숫자를 입력받음.
		printf("숫자를 입력하시오.");
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{// 숫자를 크기순으로 정리하는 반복문
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	printf("크기순으로 정렬한 숫자들 : ");
	for (j = 0; j < 10; j++)
	{
		printf(" %d ", a[j]);

		if ((a[j] == a[j - 1] && a[j - 1] != a[j - 2] )||( a[j] != a[j - 1] && a[j] != a[j + 1]))
		{//중복된값을 지우기 위한 조건
		 //첫번째 조건은 여러개가 중복된경우 한번만 인식할수있게 한 조건
		 //두번째 조건은 하나도 중복되지 않은경우 인식할수 있도록 한 조건
				aa[c] = a[j]; //조건에 충족되었을 그때의 a[j]값을 새로운 배열 aa[c]값으로 두고 c를 증가시킨다.
				c++;
		}
	}
	printf("\n중복되지 않게 정리한 숫자들 : ");
	for (i = 0; i < c; i++)
	{
		printf(" %d ", aa[i]);//마지막으로 결과값을 출력한다.
	}
	printf("\n");
	getchar();
}