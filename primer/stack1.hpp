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
    T top() const;

    bool empty() const {
        return elems.empty();
    }
};

template<typename T>
void Stack<T>::push(T const& elem) {
    elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop() {
    if (elems.empty()) {
        throw std::out_of_range("Stack<T>::pop(): empty stack");
    }

    elems.pop_back();
}

template<typename T>
T Stack<T>::top() const {
    if (elems.empty()) {
        throw std::out_of_range("Stack<T>::top(): empty stack");
    }

    return elems.back();
}
