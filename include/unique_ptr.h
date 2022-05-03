#ifndef UNIQUE_PTR
#define UNIQUE_PTR

template<typename T>

class UniquePtr
{
public:
    UniquePtr();
    UniquePtr(T* _p);
    UniquePtr(UniquePtr &ptr);
    ~UniquePtr();
    T* get();
    T& operator*();
    UniquePtr<T>& operator=(const UniquePtr& p);
private:
    T* _p;
};

#include "unique_ptr.hpp"
#endif //UNIQUE_PTR