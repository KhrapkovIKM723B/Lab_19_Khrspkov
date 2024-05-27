#include <iostream>
#include <locale>
using namespace std;

template <typename T>
void bubbleSort(T array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++) 
        {
            if (array[j] < array[j + 1]) 
            {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, ""); 
    const int sizeInt = 5;
    int intArray[sizeInt] = { 5, 2, 9, 1, 5 };

    const int sizeFloat = 6;
    float floatArray[sizeFloat] = { 4.3, 2.1, 5.6, 1.8, 3.7, 2.9 };

    const int sizeChar = 5;
    char charArray[sizeChar] = { 'e', 'a', 'd', 'c', 'b' };

    cout << "Початковий масив цілих чисел: ";
    printArray(intArray, sizeInt);
    bubbleSort(intArray, sizeInt);
    cout << "Відсортований масив цілих чисел: ";
    printArray(intArray, sizeInt);

    cout << "Початковий масив дійсних чисел: ";
    printArray(floatArray, sizeFloat);
    bubbleSort(floatArray, sizeFloat);
    cout << "Відсортований масив дійсних чисел: ";
    printArray(floatArray, sizeFloat);

    cout << "Початковий масив символів: ";
    printArray(charArray, sizeChar);
    bubbleSort(charArray, sizeChar);
    cout << "Відсортований масив символів: ";
    printArray(charArray, sizeChar);

    return 0;
}
