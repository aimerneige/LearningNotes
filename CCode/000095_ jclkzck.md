# VariableArray

## Code

```C
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size;
    int *array;
} Array;

Array array_creat(int size);
int array_size(Array* ary);
void array_get(Array* ary, int index, int value);
int array_put(Array* ary, int index);
int* array_at(Array* ary, int index);
void array_free(Array* ary);
void array_bigger(Array* ary, int more_size);

int main(void)
{
    Array test = array_creat(1);
    array_get(&test, 0, 3);
    printf("test[0] = %d\n", array_put(&test, 0));
    array_bigger(&test, 1);
    scanf("%d", array_at(&test, 1));
    printf("tets[1] = %d\n", *array_at(&test, 1));
    array_get(&test, 2, 4);
    printf("test[2] = %d\n", array_put(&test, 2));
    return 0;
}

Array array_creat(int size)
{
    Array ary;
    ary.size = size;
    ary.array = (int*)malloc(sizeof(int) * size);
    return ary;
}


int array_size(Array* ary)
{
    return ary->size;
}

void array_get(Array* ary, int index, int value)
{
    if (index > (ary->size) - 1) {
        array_bigger(ary, 1);
    }
    (ary->array)[index] = value;
}

int array_put(Array* ary, int index)
{
    return (ary->array)[index];
}

int* array_at(Array* ary, int index)
{
    return &( (ary->array)[index] );
}

void array_free(Array* ary)
{
    free(ary->array);
    ary->array = NULL;
    ary->size = 0;
}

void array_bigger(Array* ary, int more_size)
{
    int *p = (int*)malloc(sizeof(int) * ( (ary->size) + more_size ) );
    for (int i = 0; i < ary->size; i++) {
        p[i] = (ary->array)[i];
    }
    free(ary->array);
    ary->array = p;
    ary->size += more_size;
}
```

## Input

`None`

## Print

`None`

`Need Input`

## Exercise

None

## More

None

