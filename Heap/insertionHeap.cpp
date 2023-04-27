#include<iostream>
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
        //we want to insert the value
        size = size + 1;
        int index = size;

        //insert value
        arr[index] = data;

        //To correct position
        while(index > 1)
        {
            int parentIndex = index/2;
            if(arr[parentIndex] < arr[index])
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
        for(int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};
int main()
{
    Heap maxHeap;
    maxHeap.insertionIntoHeap(2);
    maxHeap.insertionIntoHeap(6);
    maxHeap.insertionIntoHeap(8);
    maxHeap.insertionIntoHeap(3);
    maxHeap.insertionIntoHeap(7);

    maxHeap.print();
    return 0;
}