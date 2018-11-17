#include <iostream>
#include <string>
#include <vector>
#include "heap.h"

int main(){
    heap h = new heap();
    h.push(3); h.push(1); h.push(2); h.push(18);
    for(int i = 0; i < h.size(); i++){
	cout << h
    }   
}
