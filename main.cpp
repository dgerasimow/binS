#include <iostream>


int binarySearch(int arr[], int key, int arrsize){
    int mid = 0;
    int left = arr[0];
    int right = arrsize;
    while(true){
        mid = (left+right)/2;
        if(key<arr[mid]){
            right=mid-1;
        } else if(key > arr[mid]){
            left = mid+1;
        } else {
            return mid;
        }
        if(left>right){
            return -1;
        }
    }
}
int main() {
    const int SIZE = 12;
    int array[SIZE] = {};
    int key = 0;
    int index = 0; // индекс ячейки с искомым значением

    for (int i = 0; i < SIZE; i++) // заполняем и показываем массив
    {
        array[i] = i + 1;
        std::cout << array[i] << std::endl;
    }

    std::cout << "\n\nВведите любое число: ";
    std::cin >> key;

    index = binarySearch(array,key,SIZE);

    if (index >= 0)
        std::cout << "Указанное число находится в ячейке с индексом: " << index << "\n\n";
    else
        std::cout << "В массиве нет такого числа!\n\n";

    return 0;
}
