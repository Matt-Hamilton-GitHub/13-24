#ifndef UNORDEREDARRAYLISTTYPE_H
#define UNORDEREDARRAYLISTTYPE_H

#include "arrayListType.h"

template <class T>
class unorderedArrayListType : public arrayListType<T> {

public:

void insertAt(int location, const T& insertItem);
void insertEnd(const T& insertItem);
void replaceAt(int location, const T& repItem);
int  seqSearch(const T& searchItem)const;
void removeAt(const T& removeItem) ;
//void removeAll(const T& removeItem);
void remove(const T& removeItem);  
unorderedArrayListType(int size = 100);
~unorderedArrayListType();

};

#endif   /* UNORDEREDARRAYLISTTYPE_H */