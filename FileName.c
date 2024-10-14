//homework


//3
/*#include <stdio.h>
#include <stdlib.h>

	int main() {
		int num = rand() % 101;
		int guess;


		printf("guess the number 0-100");


		while (1) {
			scanf("%d", &guess);
			if (num > guess) {
				printf("Too low");
			}
			else if (num < guess) {
				printf("Too high");
			}
			else {
				printf("yoohoo, you win");
				break;
			}
		}

		return 0;
	}*/


	//2
	/*#include <stdio.h>
	int main() {
	   int choice;
	   float num1;
	   float num2;
	   float result;
			do {
				printf("1. Addition\n");
				printf("2. Subtraction\n");
				printf("3. Multiplication\n");
				printf("4. Division\n");
				printf("5. Quit\n");
				printf("Enter your choice 1-5: ");
				scanf("%d", &choice);



			if (choice >= 1 && choice <= 4) {
					printf("Enter 2 numbers: ");
					scanf("%f\n", &num1);
					scanf("%f\n", &num2);

			}
			switch (choice) {
				case 1:
					result = num1 + num2;
					printf("%.1f\n", result);
					break;
				case 2:
					result = num1 - num2;
					printf("%.1f\n", result);
					break;
				case 3:
					result = num1 * num2;
					printf("%.1f\n",result);
					break;
				case 4:
					result = num1 / num2;
					printf("%.1f\n", result);
					break;
				case 5:
					printf("Exiting...\n");
					break;
				default:
					printf("Please try again.\n");
				}
			} while (choice != 5);

			return 0;

	}*/



//HW2
// 
	// 3-2
	/*#include <stdio.h>

	void escape(char s[], const char t[]) {
		int i = 0;
		int j = 0;

		while (t[i] != '\0') {
			switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
			}
			i++;
		}
		s[j] = '\0';
	}

	void unescape(char s[], const char t[]) {
		int i=0;
		int j = 0;

		while (t[i] != '\0') {
			if (t[i] == '\\') {
				switch (t[i + 1]) {
				case 'n':
					s[j++] = '\n';
					i++;
					break;
				case 't':
					s[j++] = '\t';
					i++;
					break;
				default:
					s[j++] = t[i];
					break;
				}
			}
			else {
				s[j++] = t[i];
			}
			i++;
		}
		s[j] = '\0';
	}

	int main() {
		char t[] = "This is a test.\nThis is a new line.\tAnd this is a tab.";
		char s[100];

		printf("Original string:\n%s\n", t);


		escape(s, t);
		printf("Escaped string:\n%s\n", s);


		unescape(t, s);
		printf("Unescaped string:\n%s\n", t);

		return 0;
	}*/


/*#include <stdio.h>

void itob(int n, char s[], int b) {
	int i = 0, rem;

	if (n == 0) {
		s[i++] = '0';
		s[i] = '\0';
		return;
	}

	while (n > 0) {
		rem = n % b;
		s[i++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';  
		n /= b;
	}

	s[i] = '\0';  

	for (int j = 0, k = i - 1; j < k; j++, k--) {
		char temp = s[j];
		s[j] = s[k];
		s[k] = temp;
	}
}

int main() {
	char s[20];
	int n = 25, base = 16;

	itob(n, s, base);
	printf("%d in base %d is: %s\n", n, base, s);

	return 0;
}
*/




//homework3




#include <stdio.h>

//task7

/*
int main(){
	int arr[5]={5,7,2,9,8};
	int *p=arr;


	for (int i = 0; i < 5; i++) {
		printf("element - %d is %d\n", i, *(p + i));
	}

 return 0;
}*/




//task8

/*#include <string.h>
void swap(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *str, int left, int right) {
	if (left == right) {
		printf("%s\n", str);
	} else {
		for (int i = left; i <= right; i++) {
			swap((str + left), (str + i));
			permute(str, left + 1, right);
			swap((str + left), (str + i));
		}
	}
}
int main(){
	char str[]="abcd";
	int n = strlen(str);
	printf("All permutations of the string are:\n");
	permute(str, 0, n-1);

return 0;
}*/

//task14
/*void sortArr(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}


int main() {
	int arr[] = { 25,45,89,15,82 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sortArr(arr, n);

	printf("The elements in the array\n");
	for (int i = 0; i < n; i++) {
		printf("element - %d is %d\n", i, arr[i]);
	}



	return 0;
}*/



//task21

/*int main() {
	char str[26];
	char* p = str;
	int i;

	for (int i = 0; i < 26; i++) {
		*p = 'A' + i;
		p++;
	}
	p = str;

	printf(" The Alphabets are : \n");
	for (i = 0; i < 26; i++) {
		printf(" %c ", *p);
		p++;
	}

	return 0;
}*/



//task22
/*#include <string.h>

int main() {
	char str[] = "w3resource";
	char *p = str;

	p = str + strlen(str) - 1;

	printf("Reversed string - ");
	while (p >= str) {
		printf("%c", *p);
		p--;
	}
	return 0;
}*/


//Number pyramid

void pyramid(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
			for (int k = 1; k <= i; k++) {
				printf("* ");
			}
		printf("\n");
	}
}
	int main() {
		int n;

		
		printf("emter number of rows: ");
		scanf("%d", &n);

		
		pyramid(n);

		return 0;
	}


