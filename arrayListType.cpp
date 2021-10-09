
#include <iostream>
#include "arrayListType.h"

using namespace std;


template <class T>
void arrayListType<T>::print() const {
cout << "\n--------------------------\n";
cout << "Elements: [ ";
for (int i = 0; i < length; i++){
cout << list[i] << " ";

}
cout << "]";
cout << "\n--------------------------\n";
} 


template <class T>
bool arrayListType<T>::isItemAtEqual(int location, const T& item) const {
	if (location < 0 || location >= length) {
		cout << "The location of the item to be removed " << "is out of range." << endl;
	return false;
} 	else

	return (list[location] == item);

} 


template <class T>
void arrayListType<T>::removeAt(int location) {
	if (location < 0 || location >= length){
		cout << "The location of the item to be removed "<< "is out of range." << endl;
}	else {
		for (int i = location; i < length - 1; i++){

		list[i] = list[i + 1];
		length--;
		}
}
} 


template <class T>
void arrayListType<T>::retrieveAt(int location, T& retItem)const  {

	if (location < 0 || location >= length){

		cout << "The location of the item to be retrieved is " << "out of range" << endl;

	}else
	retItem = list[location];
} 






template <class T>
bool arrayListType<T>::isEmpty() const {
	return (length == 0);
} 

template <class T>
bool arrayListType<T>::isFull() const {
	return (length == maxSize);
} 

template <class T>
int arrayListType<T>::listSize()const  {
	return length;
} 

template <class T>
int arrayListType<T>::maxListSize() const {
return maxSize;
} 



template <class T>
void arrayListType<T>::clearList() {
length = 0;
} 

// constructors

template <typename T>
arrayListType<T>::arrayListType(int size) {
if(size <= 0){
  cout << "The array size must be positive. Creating "
  << "an array of the size 100." << endl;

  maxSize = 100;
}else{
  maxSize = size;
  length = 0;

  list - new T[maxSize];
}

}


template <typename T>
arrayListType<T>::arrayListType(const arrayListType& otherList) {

	maxSize = otherList.maxSize;
	length = otherList.length;
	list = new T[maxSize]; //create the array

	for (int j = 0; j < length; j++) //copy otherList
	list[j] = otherList.list[j];

}

//destructor

template <class T>
arrayListType<T>::~arrayListType() {
delete [] list;
} 


template <class T>
const arrayListType<T>& arrayListType<T>::operator=(const arrayListType<T>& otherList){
	
	if(this != &otherList){
		delete [] list;
		maxSize = otherList.maxSize;
		length = otherList.length;
		
		list = new T[maxSize];
		
		for(int i = 0; i< length; i++){
			list[i] = otherList.list[i];
		}
	}
	
	return *this;
	
}


