Output Status : 

Problem Solved Successfully
Test Cases Passed: 
156 /156
Total Points Scored: 
4 /4
Your Total Score: 
2591
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

/*The structure of the class is
struct MinHeap
{
    int *harr;
    int capacity, heap_size;
    MinHeap(int cap) {heap_size = 0; capacity = cap; harr = new int[cap];}
    int extractMin();
    void deleteKey(int i);
    void insertKey(int k);
    int parent(int i);
    int left(int i);
    int right(int i);
};*/



//Function to extract minimum value in heap and then to store 
//next minimum value at first index.
int MinHeap::extractMin() 
{
    
    if(heap_size == 0) return -1;
    
    int res = harr[0];
    
    swap(harr[0],harr[heap_size-1]);
    heap_size--;
    
    if(heap_size > 1){
        MinHeapify(0);
    }
    return res;
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    if(heap_size > i){
        decreaseKey(i,INT_MIN);
        extractMin();
    }
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    heap_size++;
    harr[heap_size - 1] = k;
    
    int i = heap_size - 1;
    
    while(i!=0 && harr[parent(i)] > harr[i]){
        
        swap(harr[i],harr[parent(i)]);
        i = parent(i);
    }
}

//Function to change value at ith index and store that value at first index.
void MinHeap::decreaseKey(int i, int new_val) 
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) 
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}
