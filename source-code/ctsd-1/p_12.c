// 12. Find the maximum of 3 numbers using nested if.

#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
    int max;
    
    if (a > b) {
        if (a > c) {
            max = a;
        }
        else {
            max = c;
        }
    } 
    else if (b > c){
        max = b;
    } 
    else {
        max = c;    
    }
    printf("The Maximum Number Is = %d",max);
    return 0;
}

/*
OUTPUT:

Enter three numbers: 12 14 16
The Maximum Number Is = 16
*/