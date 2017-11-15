#ifndef _SINGLEOBJECT_H_
#define _SINGLEOBJECT_H_

template
<typename T>
class SingleObject
{
    static T* instance;
public:
    SingleObject() {}
    static T* GetInstance();
};

template
<typename T>
T* SingleObject<T>::instance = NULL;

template
<typename T>
T* SingleObject<T>::GetInstance()
{
    T* ret = NULL;

    if( instance == NULL )
    {
        instance = new T();
    }
    ret = instance;

    return ret;
}

#endif // _SINGLEOBJECT_H_
