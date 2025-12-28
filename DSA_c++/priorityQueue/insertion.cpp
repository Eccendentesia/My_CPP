#include <iostream>
using namespace std;
typedef struct pq
{
    int size, count;
    int *arr;
} PriQue;
class create
{
    PriQue *myq = new PriQue;

public:
    create(int s)
    {
        myq->size = s;
        myq->count = 0;
        myq->arr = new int[s + 1];
    };
    void insert(int val)
    {
        if (myq->count == myq->size)
        {
            cout << "Priority Queue Overflow " << endl;
        }
        else
        {
            myq->arr[++myq->count] = val;
            int i = myq->count;
            while (myq->arr[i] > myq->arr[i / 2])
            {
                swap(myq->arr[i / 2], myq->arr[i]);
                i /= 2;
            }
        }
    }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void deletion()
    {
        int i = myq->count;
        swap(myq->arr[1], myq->arr[i]);
        --myq->count;
        int j = 1;
        while (j < myq->count)
        {
            int left = 2 * j;
            int right = (2 * j) + 1;
            if (myq->arr[left] > myq->arr[j])
            {
                swap(myq->arr[left], myq->arr[j]);
                j = left;
            }
            else if (myq->arr[right] > myq->arr[j])
            {
                swap(myq->arr[right], myq->arr[j]);
                j = right;
            }
        }
    }
    void trav()
    {
        for (int i = 1; i <= myq->count; i++)
        {
            cout << myq->arr[i] << endl;
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = i * 2 + 2;
    if (left < n && arr[largest] > arr[left])
        largest = left;
    if (right < n &&  arr[largest] > arr[right] )
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
int main()
{
    create q(10);
    q.insert(10);
    q.insert(20);
    q.insert(12);
    q.insert(30);
    q.insert(2);
    q.trav();
    cout << "After Deletion " << endl;
    q.deletion();
    q.trav();
    cout << "Heapify array " << endl;
    int arr[] = {12, 3, 4, 43, 555, 2, 5, 32124, 351, 142, 24, 1414};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n / 2 - 1; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}