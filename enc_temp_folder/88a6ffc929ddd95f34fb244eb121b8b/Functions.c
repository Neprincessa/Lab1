#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include "Header.h"
#include <windows.h>

//конкатенация
char string_concat_string(String **buf_struct)
{
	int j_num2 = 0;
	int new_length = 0;
	printf("Введите номера строк которые надо сложить ");
	int a = 20, b = 0;
	scanf_s("%d%d", &a, &b);
	a--;
	b--;
	//buf_struct = input_struct;
	//создаём указатель на новый массив строк, содержащий две сложенных строки
	char *new_string;
	new_string = (char*)malloc(sizeof(char)*(buf_struct[a]->length + buf_struct[b]->length + 1));

	//с первой строчкой косяк
	if (a == 0)
	{
		for (int i = 0; i < buf_struct[a]->length; i++)
		{
			new_string[i] = buf_struct[a]->input_string[i]; //с учетом того, что с первой строчкой хрень просходит
		}
		new_length = buf_struct[a]->length; //установили длину новой строки равной длине первой строчки
		new_string[buf_struct[a]->length] = ' ';

		new_length = buf_struct[a]->length + buf_struct[b]->length + 1;

		realloc(new_string, sizeof(char*)*new_length);
		for (int j = buf_struct[a]->length + 1; j < buf_struct[a]->length + buf_struct[b]->length+2; j++)
		{
			new_string[j] = buf_struct[b]->input_string[j_num2]; //осуществили конкатенацию	
			j_num2++;
			//realloc(new_string, sizeof(char*)*(j + 1));
		}
		//realloc(new_string, sizeof(char*)*(buf_struct[a]->length + buf_struct[b]->length + 1));
		//вывод полученной после сложения строчки
		printf("String after concatenation: ");
		for (int j = 0; j < buf_struct[a]->length + buf_struct[b]->length + 1; j++)
		{
			printf("%c", *(new_string + j));
		}
		printf("\n");
	}
	else
	{
		if (b == 0)
		{
			for (int i = 0; i < buf_struct[a]->length; i++)
			{
				new_string[i] = buf_struct[a]->input_string[i];
			}
			new_length = buf_struct[a]->length; //установили длину новой строки равной длине первой строчки
			new_string[buf_struct[a]->length] = ' ';
			new_length = buf_struct[a]->length + buf_struct[b]->length + 1;

			realloc(new_string, sizeof(char*)*new_length);

			for (int j = buf_struct[a]->length + 1; j < buf_struct[a]->length + buf_struct[b]->length + 2; j++)
			{
				new_string[j] = buf_struct[b]->input_string[j_num2]; //осуществили конкатенацию	
				j_num2++;
				//realloc(new_string, sizeof(char*)*(j + 1));
			}
			//realloc(new_string, sizeof(char*)*(buf_struct[a]->length + buf_struct[b]->length + 1));
			//вывод полученной после сложения строчки
			printf("String after concatenation: ");
			for (int j = 0; j < buf_struct[a]->length + buf_struct[b]->length; j++)
			{
				printf("%c", *(new_string + j));
			}
			printf("\n");
		}
		
		if ((a!=0) && (b!=0))
		{
			for (int i = 0; i < buf_struct[a]->length; i++)
			{
				new_string[i] = buf_struct[a]->input_string[i];
			}
			new_length = buf_struct[a]->length; //установили длину новой строки равной длине первой строчки
			new_string[buf_struct[a]->length] = ' ';
			
			int j_num2 = 0;
			new_length = buf_struct[a]->length + buf_struct[b]->length + 1;

			realloc(new_string, sizeof(char*)*new_length);

			for (int j = buf_struct[a]->length + 1; j < buf_struct[a]->length + buf_struct[b]->length + 2; j++)
			{
				new_string[j] = buf_struct[b]->input_string[j_num2]; //осуществили конкатенацию	//с учетом того, что с первой строчкой хрень просходит
				j_num2++;
				//realloc(new_string, sizeof(char*)*(j + 1));
			}
			//realloc(new_string, sizeof(char*)*(buf_struct[a]->length + buf_struct[b]->length + 1));
			//вывод полученной после сложения строчки
			printf("String after concatenation: ");
			for (int j = 0; j < buf_struct[a]->length + buf_struct[b]->length+1; j++)
			{
				printf("%c", *(new_string + j));
			}
			printf("\n");
		}
	}
	
	return new_string;
}

void array_struct_free(String *ptr)
{
	free(ptr);
}

//задание структуры
String* set(int len)
{
	char c_c;
	String* A;

	int k = 0;
	A = (String*)malloc(sizeof(String));
	A->input_string = (char*)malloc(sizeof(char)* len);

	while ((c_c = getchar()) != '0') //заполнили массив символов, т.е. строчку в структуре
	{
		A->input_string[k] = c_c;
		k++;
	}
	//realloc(A->input_string, k);
	realloc(A->input_string, 3);
	k = k - 1;
	A->length = k;

	//p = &A;
	//B = A;
	return A;
	//Заполнили структуру
}



