

#include <iostream>
#include <list>
#include <set>
#include <string>

#include "unorderedArrayListType.h"
using namespace std;



void test();
int main()

{

// test();
unorderedArrayListType<int> strlist(5);
	system("pause");
	return 0;
}


void test(){
	
//seince wqe use templates we can vcreate unorder set that would hold almost any dat type 
  //  unorderedSetType<int> setInt(5);
 
  //  cout << "\t *******Set with Integers******* \n";
  //  setInt.insertAt(0,4); 
  //  setInt.insertAt(1,6);
  //  setInt.insertAt(2,8);
  //  //the set should be [4,6,8]
  //  setInt.print();
  //  setInt.insertAt(3,4);// cannot insert, 4 is already in the set at index 0
  //  setInt.insertAt(3,10);
  //  setInt.insertAt(4,5);
  //   //the set should be [4,6,8]
  //  setInt.insertAt(2,2);//error cannot insert in a full list
  //  setInt.replaceAt(0,14);
  //  //the final set values should be [14,6,8,10,5]
  //  setInt.print();
  //  setInt.clearList();//clear the list
  //  cout << "\t\n **********END********** \n\n\n";
   
//   
//    unorderedSetType<double> setFl(5);
//	
//   cout << "\t *******Set with Characters******* \n";
//   
//   setFl.insertAt(0,1.1); 
//   setFl.insertAt(1,1.2);
//   setFl.insertAt(2,1.3);
//  
//   setFl.print();
//   
//   setFl.insertAt(3,1.1);// cannot insert, 4 is already in the set at index 0
//   setFl.insertAt(3,1.4);
//   setFl.insertAt(4,1.5);
//    //the set should be [4,6,8]
//   setFl.insertAt(2, 2.3);//error cannot insert in a full list
//   setFl.replaceAt(0,5.1);
//   //the final set values should be [14,6,8,10,5]
//   setFl.print();
//   cout << "\t **********END********** \n\n\n";
//	
//	
}