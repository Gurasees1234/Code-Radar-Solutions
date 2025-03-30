#include <stdio.h>
void leftShiftArray(int arr[], int n, int a){
    a = a % n;
    int temp[a];
    for(int i = 0; i < a; i++) temp[i] = arr[i];
    for(int i = 0; i < n - a; i++) arr[i] = arr[i + a];
    for(int i = 0; i < a; i++) arr[n - a + i] = temp[i];
}
int main(){
    int n, a;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &a);
    leftShiftArray(arr, n, a);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
