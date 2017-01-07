#include <vector>
#include <stdexcept>

template<typename T>
class Stack {
private:
    std::vector<T> elems;

public:
    Stack() {
    }

    ~Stack() {
    }

    Stack(Stack<T> const& stack) {
        this->elems = stack.elems;
    }

    Stack<T>& operator=(Stack<T> const& stack) {
        this->elems = stack.elems;
        return *this;
    }

    void push(T const&);
    void pop();
    T pop_no_exceptionsafety();
    T top() const;

    bool empty() const {
        /*
         * 对于类模版的任何成员函数，你都可以把它实现为内联函数，将它定义于类声明里面
         */
        return elems.empty();
    }
};

template<typename T>
void Stack<T>::push(T const& elem) {
    elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop() {
    /*
     * 不能返回元素，但是却是异常安全的代码
     */
    if (elems.empty()) {
        throw std::out_of_range("Stack<T>::pop(): empty stack");
    }

    elems.pop_back();
}

template<typename T>
T Stack<T>::pop_no_exceptionsafety() {
    /*
     * 不考虑异常安全性的pop，可以返回元素
     */
    if (elems.empty()) {
        throw std::out_of_range("Stack<T>::pop_no_exceptionsafety(): empty stack");
    }

    T elem = elems.back();
    elems.pop_back();
    return elem;
}

template<typename T>
T Stack<T>::top() const {
    if (elems.empty()) {
        throw std::out_of_range("Stack<T>::top(): empty stack");
    }

    return elems.back();
}
