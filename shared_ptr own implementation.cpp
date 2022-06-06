#include <iostream>
class ReferenceCount{
public:
    ReferenceCount():m_count(0){}
    void increment(){
        m_count++;
    }
    void decrement(){
        m_count--;
    }

    int get_count(){
        return m_count;
    }
private:
    uint32_t m_count;
};

template<class T>
class SharedPointer
{
private:
    ReferenceCount mp_ref_count;
    T* ptr;

public:
    SharedPointer() :mp_ref_count(0), ptr(nullptr){
        mp_ref_count->increment();
    }
    SharedPointer(T *p){
        ptr = p;
        mp_ref_count->increment();
    }

    SharedPointer(const SharedPointer* obj) {
        ptr = obj->ptr;
        mp_ref_count = obj->mp_ref_count;
        mp_ref_count->increment();
    }

    //Decrement counter when object goes out of scope
    ~SharedPointer()
    {
        mp_ref_count->decrement();

        //This is last point reference
        if (mp_ref_count->get_count() == 0)
        {
            if (ptr)
            {
                delete ptr;
                ptr = nullptr;
            }
        }
    }

    //Overload * operator
    T* operator * ()
    {
        return *ptr;
    }

    //Overload -> operator
    T& operator -> ()
    {
        return ptr;
    }
};

int main(){  

    return 0;
}