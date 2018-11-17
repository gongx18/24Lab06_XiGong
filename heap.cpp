// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
    
    vdata.push_back(value);
    // Fix the min heap property if it is violated 
    int i = vdata.size() - 1;

    while (i != 0 && vdata[(i-1)/2] > vdata[i]) 
    { 
       swap(&vdata[i], &vdata[(i-1)/2]); 
       i = (i - 1) / 2; 
    } 
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
   int i = 0; 
   vdata[0] = vdata[vdata.size() - 1]; //replace the value of the smallest value by a leaf node; 
   vdata.pop_back();//delete the last element in vector 

   while (i < (vdata.size() - 1)/2 && (vdata[i * 2 + 1] < vdata[i] || vdata[i * 2 + 2] < vdata[i])){
	if(vdata[i * 2 + 1] < vdata[i *2 + 2]){
	    swap(&vdata[i], &vdata[i*2 + 1]);
	    i = i*2 + 1; 
	}else{
	    swap(&vdata[i], &vdata[i*2 + 2]); 
	    i = i*2 + 2; 
	}
   }
}

// Returns the minimum element in the heap
int Heap::top(){
  int min_ele = vdata[0];
  for(int i = 0; i < vdata.size(); i ++){
      min_ele = std::min(min_ele, vdata[i]);
  }
  return min_ele; 
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
    if(vdata.size() == 0) return true;
    else return false; 
}

void Heap::swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
//my helper function
void print_heap(){
    for (std::vector<int>::const_iterator i = vdata.begin(); i != vdata.end(); ++i)
        std::cout << *i << ' ';
}    
