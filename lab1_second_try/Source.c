#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
/*��������� �������������� ���������� ��� ������� ��������. ������������ ��������� ������ ��� ������ ��������*/

/*realloc(arr, sizeof(int)*newsize);
return newsize;*/ //������������ ���������� ������!
//array = realloc(array, sizeof(float)*(iotr + 1));

int main()
{
	setlocale(LC_ALL, "Russian");

	int maxlen = 0, amount = 0, len = 0;	
	
	printf("������� ����� ����� ");
	scanf_s("%i",  &amount);
	printf("������� ������������ ����� ");
	scanf_s("%i", &maxlen);

	String **input_struct;
	input_struct = (String**)malloc(amount * sizeof(String*));


	//�������� ���� ����� ����
	if (amount == 1 || amount == 0) 
	{
		printf("������� ��� ��� ����� ������� ������ 1 ");
		scanf_s("%i", &amount);

		//���������� ������� ��������
		for (int i = 0; i < amount; i++)
		{
			input_struct[i] = set(maxlen); //������ � ������ ����� ����� ���
		}//���������

	//	printf("fed fef 3q############# %d\n", input_struct[0]->length);
	}
	
	else
	{
		//���������� ������� ��������
		for (int i = 0; i < amount; i++)
		{
			String *currentString = set(maxlen);
			input_struct[i] = set(maxlen);

		}//���������

		string_concat_string(input_struct);
	}
	

	getchar();
	system("PAUSE");
	return 0;
}

//������������� �������
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