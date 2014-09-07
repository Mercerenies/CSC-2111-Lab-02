#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

///A simple wrapper class for writing to files
class WriteFile {
private:
    ofstream output_file;
    bool closed;
public:
    ///Create a WriteFile
    WriteFile(const char* file_name);
    ///Close and destruct a WriteFile
    virtual ~WriteFile();
    ///Write a line to the file
    void writeLine(String* line);
    ///Close the file
    void close();
};

#endif
