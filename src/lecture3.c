//#include <stdio.h>
//
//
//float get_array_average(const int nums[], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; ++i) {
//        sum += nums[i];
//    }
//    return (float) sum / n;
//}
//
//
//void quicksort(int number[], int first, int last){
//    int i, j, pivot, temp;
//    if (first < last) {
//        pivot = first;
//        i = first;
//        j = last;
//        while(i < j) {
//            while(number[i] <= number[pivot] && i < last)
//                i++;
//            while(number[j] > number[pivot])
//                j--;
//            if (i < j) {
//                temp = number[i];
//                number[i] = number[j];
//                number[j] = temp;
//            }
//        }
//        temp = number[pivot];
//        number[pivot] = number[j];
//        number[j] = temp;
//        quicksort(number, first,j - 1);
//        quicksort(number,j + 1, last);
//    }
//}
//
//
//void sort_array(int nums[], int n) {
//    quicksort(nums, 0, n - 1);
//    printf("Sorted list in ascending order:\n");
//
//    for (int i = 0; i < n; i++)
//        printf("%d ", nums[i]);
//
//    printf("\n");
//}
//
//
//void run_demo() {
//    int nums[100], n, i;
//    float avg;
//
//    printf("Enter the numbers of elements: ");
//    scanf("%d", &n);
//
//    while (n > 100 || n < 1) {
//        printf("Error! number should in range of (1 to 100).\n");
//        printf("Enter the number again: ");
//        scanf("%d", &n);
//    }
//
//    for (i = 0; i < n; ++i) {
//        printf("%d. Enter number: ", i + 1);
//        scanf("%d", &nums[i]);
//    }
//
//    avg = get_array_average(nums, n);
//    printf("Average = %.2f\n", avg);
//    sort_array(nums, n);
//}
//
//
//int main() {
//    run_demo();
//    return 0;
//}
