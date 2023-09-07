#include<stdio.h>
int sum_of_odd_digits(int n) {

	int r, sum = 0;

	while (n > 0) {
		r = n % 10;	
		n = n / 10;	
		if (r % 2 == 1)
			sum = sum + r;

	}

	return sum;

}
int sum_of_even_digits(int n) {
    int r, sum = 0;
    while (n > 0) {
        r = n % 10; 
        n = n / 10; 
        if (r % 2 == 0){
            sum = sum + r;
        }
    }
    return sum;
}

int main() {

	int n,x;
	printf("Enter a Number: ");
	scanf("%d", &n);
    printf("Enter 1 for odd and 0 for even: ");
    scanf("%d",&x);
    if (x == 1)
    {
	printf("Sum of Odd Digits: %d", sum_of_odd_digits(n));
    }
    else if (x== 0)
    {
	printf("Sum of Odd even: %d", sum_of_even_digits(n));
    }
    else
    {
        printf("Enter a valid value");
    }
    return 0;
}