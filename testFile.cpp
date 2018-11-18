#include <iostream>
#include <string>
#include <vector>
#include "heap.h"

int main(){
    Heap h;
    h.push(100); h.push(1); h.push(2); h.push(18); h.push(16); h.push(17);
    h.print_heap();   
}
