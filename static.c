#include <stdio.h>

int avi(int a1)
{
    static int a = 34;
    printf("The value of a is %d\n ", a);
    a++;
    return a1*18;
}

int main()
{
    int a = 33;
    printf("The value of a is %d\n", a);
    printf("%d\n\n",avi( a ));
    printf("%d\n\n",avi( a ));
    printf("%d\n\n",avi( a ));
    printf("%d\n\n",avi( a ));
    printf("%d\n\n",avi( a ));
    static int c = 282;
    printf("please give me the values of a %d\n", c);
    

    return 0;
}