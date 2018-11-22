#include <iostream>
#include <string>
#include <vector>
#include "heap.h"

int main(){
    Heap h;
    h.push(19); h.push(11); h.push(22); h.push(2); h.push(1); h.push(18); h.push(13); h.push(15);
    std::cout<<"Test print: "<<h.print_heap()<<endl;
    h.pop();
    std::cout<<"after 1 pop: "<<h.print_heap()<<endl;
    h.pop();
    std::cout<<"ater 2 pop: "<<h.print_heap()<<endl; 
    std::cout<< h.top()<<endl;
}
