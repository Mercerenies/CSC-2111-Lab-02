#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
private:
   ifstream input_file;
   bool _eof;
   bool closed;

public:
//! constructor, which reads in the file
ReadFile(const char* file_name);

//! destructor, which closes the file
~ReadFile();

//! function necessary for obtaining lines of the file
String* readLine();
//! tracks the file to see if the end of the file has been reached
bool eof();

/*! confirms that the file is actually closed, and closes 
the file if it isn't closed already*/
void close();
};
#endif
