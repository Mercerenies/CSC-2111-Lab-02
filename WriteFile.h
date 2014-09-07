#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

///A simple wrapper class for writing to files
/**
 * A WriteFile is created with a single parameter: the file name.
 * The WriteFile can be prematurely closed with close(); however,
 * it will always be closed upon destruction. Writing to the file
 * is done using writeLine(String*).
 */
class WriteFile {
private:
    ofstream output_file;
    bool closed;
public:
    ///Create a WriteFile; the parameter should be a valid, null-terminated string that describes a valid file name.
    WriteFile(const char* file_name);
    ///Close and destruct a WriteFile
    virtual ~WriteFile();
    ///Write a line to the file; String* should be a non-null pointer to a valid string; will silently ignore the input if the file is closed
    void writeLine(String* line);
    ///Close the file and prohibit further writing using this handle
    void close();
};

#endif
