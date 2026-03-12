#include <stdio.h>
#include <math.h>
void Sine(float x) 
{
    float sum = x, term = x, result;
    int i = 1;
    while (fabs(term / sum) > 0.000001)
    {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    }
    result = sum;
    printf("sin(%f) = %f\n", x, result);
}
void cosine(float x) 
{
    float sum = 1, term = 1, result;
    int i = 1;
    while (fabs(term / sum) > 0.000001)
    {
        term = -term * x * x / ((2 * i - 1) * (2 * i));
        sum += term;
        i++;
    }
    result = sum; 
    printf("cos(%f) = %f\n", x, result); 
}

void SUM() 
{
    float sum = 0, term = 1, result;
    int n = 1; 
    while (n == 1 || (term / sum > 0.000001))
    {
        term = powf((1 / (float)n), n);
        sum += term;
        n++;
    }    
    result = sum;
    printf("SUM = %f\n", result); 
}

int main()
{
    float x;
    printf("Enter value of angle (in radians): ");
    scanf("%f", &x);
    
    Sine(x);
    cosine(x);
    SUM();
    
    return 0;
}
