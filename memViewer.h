  #ifndef MEMVIEWER_H_ 
  #define MEMVIEWER_H_
  #include <string>
  #include <windows.h>
   #include <iostream>
#include <cstdio>     
#include <tlhelp32.h>   
            #include <tchar.h>
#include <stdio.h>
#include <psapi.h>
  class memViewer
  {
      public:
          memViewer();          
          ~memViewer();
          
          void GetProcID(const char * pname);
          int PrintModules ();
      private:
          DWORD pid;
    
  };
  
  
  #endif