#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[250];
    int size;
    Heap()
    {
        size = 0;
    }
    void insertionIntoHeap(int data)
    {
        // we want to insert the value
        size = size + 1;
        int index = size;

        // insert value
        arr[index] = data;

        // To correct position
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
                break;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
        largest = left;
    
    if (right <= n && arr[right] > arr[largest])
        largest = right;
    
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main()
{
    int arr[] = {-1, 2, 6, 8, 3, 7};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
        heapify(arr, n, i);
    cout << "Printing after building heap: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //8 7 6 2 3
    return 0;
}