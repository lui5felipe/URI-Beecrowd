#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    float preco[5]={4.00,4.50,5.00,2.00,1.50};
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("Total: R$ %.2f\n",(preco[n1-1]*n2))   ;
    return 0;
}
