//#include<stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *   \n");
//    printf("    *  *   \n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a > 139)
//        printf("Genius\n");
//    return 0;
//}
//#include <stdio.h> 
//int main() 
//{ 
//	int a = 40; 
//    int c = 212; 
//	printf("%d", ((-8+22)*a-10+c/2)); 
//	return 0; 
//}
//#include <stdio.h>
//#define SIZE 5
//void copy_arr(double ar1[], double ar[], int n);
//void copy_ptr(double* ar2, double* ar, int n);
//void copy_ptrs(double* ar3, double* ar, double* end);
//void print_array(double ar[], int n);				//打印数组的函数
//
//int main(void)
//{
//    double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//    double target1[SIZE];
//    double target2[SIZE];
//    double target3[SIZE];
//
//    copy_arr(target1, source, SIZE);
//    copy_ptr(target2, source, SIZE);
//    copy_ptrs(target3, source, source + SIZE);
//    print_array(target1, SIZE);
//    print_array(target2, SIZE);
//    print_array(target3, SIZE);
//
//    return 0;
//}
//
//void copy_arr(double ar1[], double ar[], int n)
//{
//    int index;
//    for (index = 0; index < n; index++)
//        ar1[index] = ar[index];
//}
//
//void copy_ptr(double* ar2, double* ar, int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        *(ar2++) = *(ar++);
//}
//
//void copy_ptrs(double* ar3, double* ar, double* end)
//{
//    int i;
//    for (i = 0; ar < end; i++)
//        *(ar3++) = *(ar++);
//}
//
//void print_array(double ar[], int n)
//{
//    int index;
//    for (index = 0; index < n; index++)
//        printf("%g ", ar[index]);
//    printf("\n");
//}
#include<stdio.h>
int max(int arg[], int n)
{
	int i, max;

	for (i = 0, max = arg[0]; i < n; i++)
	{
		if (max < arg[i])
			max = arg[i];
	}

	return max;
}
int main(void)
{
	int num[] = { 23,2,32,66,3,5,25,7,3,20 };
	printf("The biggest number is %d\n", max(num, 10));


	return 0;
}
