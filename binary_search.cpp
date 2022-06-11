//binary search implementation
#include <iostream>
#include <math.h>
using namespace std;

//binary search
int binary_search(int array[],int n,int num){
    int left = 0;
    int right = n - 1;
    //limit the array until we find the number
    while(left <= right){
        int mid = (left + right)/2;
        if(array[mid] < num){
            left = mid + 1;
        }
        else if(array[mid] > num){
            right = mid - 1;
        }
        else{
            return mid;
        }
    }
    //return -1 if number is not in array
    return -1;
}

int main(void){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int num = 10;
    //array size
    int n = *(&array + 1) - array;
    int result = binary_search(array, n, num);
    //printing the result
    if(result == -1) {
        cout << "element is not present";
    }
    else{
        cout << "element is present at index: " << result;
    }
    return 0;
}