int *insertionSort(int array[], int length) {
    //第三种, 基于插入排序, 时间复杂度O(n^2), 空间复杂度O(1)
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while ((j >= 0) && (array[j] > key)) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    return array;
}
