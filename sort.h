#ifndef MAGALISH_SORT_H
#define MAGALISH_SORT_H

template <typename T>
class Sorter{
public:
    virtual T *sort(T *arr, int size) = 0;
};

template <typename T>
class SimpleInsertion: public Sorter<T>{
public:
    T *sort(T *arr, int size);
};

template <typename T>
T* SimpleInsertion<T>::sort(T *arr, int size) {
    T *sorted = new T [size];
    for (int i = 0; i < size; i++){
        sorted[i] = arr[i];
    }
    int i, j, x;
    for(i = 0; i < size; i++){
        x = sorted[i];
        for(j = i - 1; j >= 0 && sorted[j] > x; j--)
            sorted[j + 1] = sorted[j];
        sorted[j + 1] = x;
    }
    return sorted;
}

#endif //MAGALISH_SORT_H
