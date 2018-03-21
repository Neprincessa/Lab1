#pragma once
#ifndef _LAB__H__
#define _LAB__H__

typedef struct string {
	char *input_string; // pointer at the array of symbols
	int length;
} String;


string_concat_symbol(String *str, char symbol);

char string_concat_string( String **buf_struct);

String *set(int len);

String* string_division(char div);

String input(int y);
void array_struct_free(String *ptr);

int main();

#endif // !_LAB__H__
