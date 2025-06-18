#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    printf("%d\n", count);
    if (count < 10){
        count++;
        return (main());}
    else 
        getchar();
        return 0;
}