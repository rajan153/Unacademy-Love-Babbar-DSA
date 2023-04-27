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
    void deletionElement()
    {
        if(size == 0){
            cout<<"Heap is Already Empty";
            return;
        }
        //Step 1
        swap(arr[1], arr[size]);
        //Step 2
        size--;
        //Step 3 correct position
        int index = 1;
        while(index <= size)
        {
            int largest = index;
            int left = 2 * index;
            int right = 2 * index + 1;
            if(left <= size && arr[left] > arr[index])
            {
                index = left;
            }
            if(right <= size && arr[right] > arr[index])
                index = right;
            if(largest!=index)
            {
                swap(arr[largest], arr[index]);
                index = largest;
            }
            else
                //we got Correct position
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

    cout<<"Original Array: "<<endl;
    maxHeap.print();
    cout<<endl;
    // cout<<"After Delete Array: "<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;
    maxHeap.deletionElement();
    maxHeap.print();
    cout<<endl;

    return 0;
}