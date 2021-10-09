#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H

template <class T>
class arrayListType {

public:
const arrayListType<T>&operator=(const arrayListType<T>& otherList);
bool isEmpty() const;
bool isFull() const;

int listSize()const;
int maxListSize() const;
void print()const;
bool isItemAtEqual(int location, const T& item)const ;
virtual void insertAt(int location, const T& insertItem) = 0;
virtual void insertEnd(const T& insertItem) = 0;
void removeAt(int location);
void retrieveAt(int location, T& retItem) const ;
virtual void replaceAt(int location, const T& repItem) = 0;
void clearList();
virtual int seqSearch(const T& searchItem)const  = 0;
virtual void remove(const T& removeItem) = 0;

arrayListType(int size = 100);

arrayListType(const arrayListType<T>& otherList);

virtual ~arrayListType();

protected:

T *list; //array to hold the list elements
int length; //variable to store the length of the list
int maxSize; //variable to store the maximum

};

#endif   /* ARRAYLISTTYPE_H */