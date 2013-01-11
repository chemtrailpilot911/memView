#include <iostream>
   #include "main.h"
   
int main()
{
    std::cout << "This is a native C++ program." << std::endl;
    memViewer *x=new memViewer();
    x->GetProcID("PSPad.exe");
    x->PrintModules();
    delete x;
    return 0;
}