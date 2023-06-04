class Foo {
private:
    mutex m_second;
    mutex m_third;

public:
    Foo() {

        m_second.lock();
        m_third.lock();
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        m_second.unlock();
    }

    void second(function<void()> printSecond) {
        m_second.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        m_third.unlock();
    }

    void third(function<void()> printThird) {
        m_third.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};