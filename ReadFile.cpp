#include "ReadFile.h"
#include <iostream>
#include <string>

//Moist Towlettes

ReadFile* createReadFile(const char* file_name)
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}

void destroyReadFile()
{
   close(rf);
   delete rf;
}

bool eof()
{
   return rf->_eof;
}

void close()
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* readLine()
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
