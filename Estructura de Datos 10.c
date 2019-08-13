#include<stdio.h>
#define A 4
void proceso(int*,int*);
void imprime(int*,int);

int main()
{
    system("color F0");
    int a[A][A]={{1,2,0,3},{4,0,0,1},{5,4,3,2},{0,0,0,1}};
    int *arr, suma=0;
    arr=&a[0][0];
    printf("\n\t\tArreglo Bidimensional, Tipo Numerico.\n\n");
    proceso(arr,&suma);
    imprime(arr,suma);
    getchar();
    getchar();
}

void proceso(int *arr, int *suma)
{
    int i;
    for(i=0;i<A*A;++i)
    {
        if(*(arr+i)!=0)
        {
            *suma+=*(arr+i);
        }
    }
}

void imprime(int *arr, int suma)
{
    int i,j=1;
    printf("\n\nImpresion de la Matriz\n\n");
    for(i=0;i<A*A;++i)
    {
        printf("%d\t",*(arr+i));
        if(j==A)
        {
            printf("\n");
            j=0;
        }
        ++j;
    }
    printf("\n\nEl Resultado de la Suma es: %d\n\n",suma);
}
