//decimal to binary octal hexadecimal
#include <stdio.h>
// Function to convert decimal to binary
void decToBin(int n)
{
    if(n==0) {printf("binary"); return;}
    int binary[32];
    int i=0;
    while(n>0)
    {
      binary[i]=n%2;
      n=n/2;
      i++;
    }
    printf("binary: ");
    for(int j=i-1;j>=0;j--)
    {
      printf("%d",binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decToOct(int n) {
    int octal[100];
    int i = 0;
    while (n != 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decToHex(int n) {
    char hex[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 55;
        }
        n = n / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    decToBin(decimal);
    decToOct(decimal);
    decToHex(decimal);

    return 0;
}