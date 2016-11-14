#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

au_array myArray;

void test_au_array_create()
{
	puts("Test: create an array");
	
	au_array *array = au_array_create();
    
	assert(array);
	assert(array->length == 0);
	assert(array->element_size == 1);
	assert(array->elements == NULL);
	
	puts("Success\n");
	}

void test_au_array_create_of_length()
{
    assert(false);
}

void test_au_array_create_with_array()
{
    assert(false);
}

void test_au_array_create_with_buffer()
{
    assert(false);
}

void test_au_array_free()
{
    assert(false);
}

void test_au_array_free_with_elements()
{
    assert(false);
}

void test_au_array_free_with_element_handler()
{
    assert(false);
}

void test_au_array_is_empty()
{
    assert(false);
}

void test_au_array_length()
{
    assert(false);
}

void test_au_array_size()
{
    assert(false);
}

void test_au_array_element_size()
{
    assert(false);
}

void test_au_array_first()
{
    assert(false);
}

void test_au_array_last()
{
    assert(false);
}

void test_au_array_get()
{
	int i;
	au_array *array = au_array_create_of_length(5, 1);
	
	for (i = 0; i < 5; i = i + 1) {
		array->elements[i] = i + 1;
	}
	
	assert(au_array_get(array, 1) == 2);
	assert(au_array_get(array, 2) == 3);
	assert(au_array_get(array, 6) == "?");
}

int main(int argc, char **argv)
{
    test_au_array_create();
    test_au_array_create_of_length();
    test_au_array_create_with_array();
    test_au_array_create_with_buffer();

    test_au_array_free();
    test_au_array_free_with_elements();
    test_au_array_free_with_element_handler();

    test_au_array_is_empty();
    test_au_array_length();
    test_au_array_size();
    test_au_array_element_size();

    test_au_array_first();
    test_au_array_last();
    test_au_array_get();

    return 0;
}