# malloc

其函数原型为void *malloc(unsigned int size)；其作用是在内存的动态存储区中分配一个长度为size的连续空间。

**注意：malloc会返回一个void，因此一般在使用的时候需要用到强制转换**

**另外使用malloc的时候需要加头文件<string.h>**

一般使用格式：

**p(指针名) = （强制转换类型）malloc(要分配给多少size内存)**

**用malloc作动态数组**

```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    scanf("%d",&n);
    p = (int *)malloc(n * sizeof(int));//等价于p[n]，int n（c99）
    for(int i = 0;i < n;i++){
        p[i] = i;
    printf("%d \n",p[i]);  
    }
    free(p)//使用结束以后要释放neui'c
}
```

