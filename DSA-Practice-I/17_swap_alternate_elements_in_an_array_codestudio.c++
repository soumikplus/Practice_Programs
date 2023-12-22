void swapAlternate(int *arr, int size)
{
  
    //   for (int i = 0; i < size - 1; i += 2) {
    //     swap(arr[i], arr[i + 1]);
    //   }
      for (int i = 0; i < size; i += 2) {
        if(i+1<size)
        swap(arr[i], arr[i + 1]);
      }
    
  
}