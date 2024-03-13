#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення кількості елементів масиву, що дорівнюють 0
int countZeros(int arr[], int n) {
    setlocale(LC_CTYPE, "ukr"); // дозволити використання української мови
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

// Функція для знаходження мінімального елемента в масиві
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Функція для обчислення суми елементів масиву після мінімального елемента
int sumAfterMin(int arr[], int n) {
    int minIndex = 0;
    int min = findMin(arr, n);
    while (arr[minIndex] != min) {
        minIndex++;
    }
    int sum = 0;
    for (int i = minIndex + 1; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Функція для перевірки, чи число є числом Фібоначчі
bool isFibonacci(int num) {
    int a = 5 * num * num;
    return (sqrt(a + 4) == floor(sqrt(a + 4)) || sqrt(a - 4) == floor(sqrt(a - 4)));
}

int main() {
    // Заданий масив
    int arr[20] = { 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946 };

    // a) Обчислення кількості елементів масиву, що дорівнюють 0
    cout << "Кількість елементів масиву, що дорівнюють 0: " << countZeros(arr, 20) << endl;

    // б) Обчислення суми елементів масиву, розташованих після мінімального елемента
    cout << "Сума елементів масиву, розташованих після мінімального елемента: " << sumAfterMin(arr, 20) << endl;

    // Введення елементів масиву, які є числами Фібоначчі
    cout << "Елементи масиву, які є числами Фібоначчі: ";
    for (int i = 0; i < 20; ++i) {
        if (isFibonacci(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
