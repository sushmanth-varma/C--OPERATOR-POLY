#include <iostream>
class Counter {
private:
    int value;
public:
    Counter(int initialValue = 0) : value(initialValue) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
    int getValue() const {
        return value;
    }
};
int main() {
    Counter count(5);
    ++count;
    std::cout << "After prefix ++: " << count.getValue() << std::endl;
    count++;
    std::cout << "After postfix ++: " << count.getValue() << std::endl;
    return 0;
}
