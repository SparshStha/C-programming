#include<stdio.h>

int main() {

    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i=2; i<=n-1; i++){ //or for(int i=2; i<=n/2; i++)
        if(n%i==0){
            a = 1;
            break;
        }
    } 
    if (a==0){
        printf("The given number is Prime\n");
    }
    else
    {
        printf("The given number is composite\n");
    }
    return 0;
}