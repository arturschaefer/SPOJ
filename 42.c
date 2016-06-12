#include <stdio.h>
// teste do site
int main(void){
    int num = 0;
    while ( num != 42){
        scanf("%d",&num);
        if (num == 42)  break;
        else    printf("%d\n", num);
    }
    return 0;
}
