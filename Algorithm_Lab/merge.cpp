

// MERGE SORT
void merge(int *arr, int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int [len2];

    // Copy Values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 Sorted Array
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
             arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
         arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] 
    first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e){
    // Base Case
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    // sort left Part
    mergeSort(arr, s, mid);

    // Sort right Part
    mergeSort(arr, mid+1, e);

    // merge
    merge(arr, s, e);
}

