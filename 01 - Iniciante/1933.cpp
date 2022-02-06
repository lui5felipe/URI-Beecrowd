#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B;
    scanf("%d %d",&A,&B);
    if(A==B)
        printf("%d\n",A);
    else
        printf("%d\n",max(A,B));
    return 0;
}