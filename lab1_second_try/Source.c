#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
/*Установка фиксированного количества для массива структур. Динамическое выделение памяти под массив символов*/

/*realloc(arr, sizeof(int)*newsize);
return newsize;*/ //динамическое ввыделение памяти!
//array = realloc(array, sizeof(float)*(iotr + 1));

int main()
{
	setlocale(LC_ALL, "Russian");

	int maxlen = 0, amount = 0, len = 0;	
	
	printf("Введите число строк ");
	scanf_s("%i",  &amount);
	printf("Введите максимальную длину ");
	scanf_s("%i", &maxlen);

	String **input_struct;
	input_struct = (String**)malloc(amount * sizeof(String*));


	//проверка если строк мало
	if (amount == 1 || amount == 0) 
	{
		printf("Введите еще раз число строчек больше 1 ");
		scanf_s("%i", &amount);

		//заполнение массива структур
		for (int i = 0; i < amount; i++)
		{
			input_struct[i] = set(maxlen); //ошибка в работе этого цикла окъ
		}//заполнили

	//	printf("fed fef 3q############# %d\n", input_struct[0]->length);
	}
	
	else
	{
		//заполнение массива структур
		for (int i = 0; i < amount; i++)
		{
			String *currentString = set(maxlen);
			input_struct[i] = set(maxlen);

		}//заполнили

		string_concat_string(input_struct);
	}
	

	getchar();
	system("PAUSE");
	return 0;
}

//тестировочная функция
/*putchar('1');
printf("\n");
int l;
char d;
for (int i = 0; i < amount; i++)
{
for (l = 0; l < input_struct[i]->length; l++)
{
printf("%c", input_struct[i]->input_string[l]);
}
printf("\n");
}
printf("\n");*/