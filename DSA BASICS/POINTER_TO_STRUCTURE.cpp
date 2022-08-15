#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};

int main()
{
    struct complex cn1;
    struct complex cn2;
    int sumr, sumi;

    printf("ENTER THE REAL PART OF  THE 1ST COMPLEX NO:\n ");
    scanf("%d", &cn1.real);
    printf("ENTER THE IMAGINARY PART OF  THE 1ST COMPLEX NO:\n ");
    scanf("%d", &cn1.imaginary);
    printf("ENTER THE REAL PART OF  THE 2ND COMPLEX NO:\n ");
    scanf("%d", &cn2.real);
    printf("ENTER THE IMAGINARY PART OF  THE 2ND  COMPLEX NO:\n ");
    scanf("%d", &cn2.imaginary);
    
    sumr = (cn1.real + cn2.real);
    sumi = (cn1.imaginary + cn2.imaginary);
    
    printf("THE SUM OF THE REAL PART OF THE COMPLEX NUMBER IS::%d\n", sumr);
    printf("THE SUM OF THE IMAGINARY PART OF THE COMPLEX NUMBER IS::%d\n", sumi);
    return 0;
}