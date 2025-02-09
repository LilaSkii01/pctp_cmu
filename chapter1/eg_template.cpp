#include <iostream>

template <class T>
class array {
public:
    array(int size) {
        a = new T[size];  // 动态分配数组
        this->size = size;
    }
    ~array() {
        delete[] a;  // 释放内存，避免内存泄漏
    }

    T sub(int i) {
        if (i >= 0 && i < size) {
            return a[i];  // 返回数组的第 i 个元素
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    void set(int i, T value) {
        if (i >= 0 && i < size) {
            a[i] = value;  // 赋值
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

private:
    T* a;  // 指向数组的指针
    int size;  // 记录数组大小，防止越界访问
};
