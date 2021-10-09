// #include <iostream>
// #include "unorderedSetType.h"



// template <class T>
// void unorderedSetType<T>::insertAt(int location, const T& insertItem){

// if (location < 0 || location >= this->maxSize)

// cout << "The position of the item to be inserted "

// << "is out of range." << endl;

// else if (this->length >= this->maxSize)  //list is full

// cout << "Cannot insert in a full list" << endl;

// else

// {

// int loc = seqSearch(insertItem);

// if (loc == -1)

// {

// for (int i = this->length; i > this->location; i--)

// this->list[i] = this->list[i - 1];  //move the elements down

// this->list[location] = this->insertItem; //insert the item at

// //the specified position

// this->length++;   //increment the length

// }

// else

// cout << "The item to be inserted is already in the list." << endl;

// }

// } //end insertAt

// template <class T>
// void unorderedSetType<T>::insertEnd(const T& insertItem)

// {

// if (this->length >= this->maxSize)  //the list is full

// cout << "Cannot insert in a full list." << endl;

// else

// {

// int loc = seqSearch(insertItem);

// if (loc == -1)

// {

// this->list[this->length] = insertItem;

// this->length++;   //increment the length

// }

// else

// cout << "The item to be inserted is already in the list." << endl;

// }

// } //end insertEnd

// template <class T>
// void unorderedSetType<T>::replaceAt(int location,const T& repItem)

// {

// if (location < 0 || location >= this->length)

// cout << "The location of the item to be "

// << "replaced is out of range." << endl;

// else

// {

// int loc = seqSearch(repItem);

// if (loc == -1)

// this->list[location] = repItem;

// else

// cout << "The item to be inserted is already in the list." << endl;

// }

// } //end replaceAt

// template <class T>
// unorderedSetType<T>::unorderedSetType(int size)
// : unorderedArrayListType<T>(size)

// {

// }  //end constructor
