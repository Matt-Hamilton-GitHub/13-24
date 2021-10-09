#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;


template <class T>
void unorderedArrayListType<T>::insertAt(int location, const T& insertItem) {

if (location < 0 || location >= this->maxSize){
	cout << "The position of the item to be inserted " << "is out of range." << endl;
}else if (this->length >= this->maxSize){ //list is full
	cout << "Cannot insert in a full list" << endl;
}else {
	for (int i = this->length; i > location; i--)

this->list[i] = this->list[i - 1]; //move the elements down
this->list[location] = insertItem; //insert the item at
this->length++; //increment the length

}

} //end insertAt

template <class T>
void unorderedArrayListType<T>::insertEnd(const T& insertItem) {

if (this->length >= this->maxSize) //the list is full

cout << "Cannot insert in a full list." << endl;

else {

this->list[this->length] = insertItem; //insert the item at the end

this->length++; //increment the length

}

} //end insertEnd


template <class T>
int unorderedArrayListType<T>::seqSearch( const T& searchItem) const{

int loc;

bool found = false;

loc = 0;

while (loc < this->length && !found)

if (this->list[loc] == searchItem)

found = true;

else

loc++;

if (found)

return loc;

else

return -1;

} //end seqSearch


template <class T>
void unorderedArrayListType<T>::removeAt(const T& removeItem) {

int loc;

if (this->length == 0)

cout << "Cannot delete from an empty list." << endl;

else {

loc = seqSearch(removeItem);

if (loc != -1)

removeAt(loc);

else

cout << "The item to be deleted is not in the list."

<< endl;

}

} //end remove

//
//template <class T>
//void unorderedArrayListType<T>::removeAll( const T& removeItem) {
//
//int loc;
//
//if (this->length == 0)
//
//cout << "Cannot delete from an empty list." << endl;
//
//else{
//
//// Find and remove the first occurrence of removeItem (if there is one)
//
//loc = seqSearch(removeItem);
//
//if (loc != -1)
//
//removeAt(loc);
//
//else
//
//cout << "The item to be deleted is not in the list." << endl;
//
//}

// Set up a loop to find other occurrences and delete them as well

//while (loc != -1)
//
//{
//
//loc = seqSearch(removeItem);
//
//if (loc != -1)
//
//removeAt(loc);
//
//}
//
//}

template <class T>
void unorderedArrayListType<T>::remove(const T& removeItem) {

int loc;

if(this->length == 0){
	cout << "Cannot delete from an empty list." <<  endl;
}else{
	loc = seqSearch(removeItem);
	
	if(loc != -1){
		removeAt(loc);
	}else{
		cout << "The item to be deleted is not in the list." << endl;
	}
}

} //end replaceAt


template <class T>
void unorderedArrayListType<T>::replaceAt(int location, const T& repItem) {

if (location < 0 || location >= this->length)

cout << "The location of the item to be " << "replaced is out of range." << endl;

else

this->list[location] = repItem;

} //end replaceAt

template <class T>
unorderedArrayListType<T>::unorderedArrayListType(int size)

: arrayListType<T>(size) {

} //end constructor
template <class T>
unorderedArrayListType<T>::~unorderedArrayListType(){
delete [] this->list;
}
