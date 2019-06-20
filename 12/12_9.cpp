#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class MyString
{
private:
    char *Buffer;

    // private default constructor
    MyString() {}

public:
    // constructor
    MyString(const char *InitialInput)
    {
        if (InitialInput != NULL)
        {
            Buffer = new char[strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
        }
        else
            Buffer = NULL;
    }

    MyString(const MyString &CopySource)
    {
        cout << "Copy constructor: copying from MyString" << endl;

        if (CopySource.Buffer != NULL)
        {
            // ensure deep copy by first allocating own Buffer
            Buffer = new char[strlen(CopySource.Buffer) + 1];

            //copy from the source into local Buffer
            strcpy(Buffer, CopySource.Buffer);

            // display memory address pointed by local Buffer
            cout << "Buffer points to: 0x" << hex;
            cout << (unsigned int *)Buffer << endl;
        }
        else
            Buffer = NULL;
    }
    MyString(const MyString &CopySource);


    // copy assignment operator
    MyString &operator=(const MyString &CopySource) {
        if ((this != &CopySource) && (CopySource.Buffer != NULL))
        {
            if (Buffer != NULL)
                delete[] Buffer;

            // ensure deep copy by first allocating own Buffer
            Buffer = new char[strlen(CopySource.Buffer) + 1];

            // copy from the source into local Buffer
            strcpy(Buffer, CopySource.Buffer);
        }

        return *this;
    }

    // Destructor
    ~MyString()
    {
        if (Buffer != NULL)
            delete[] Buffer;
    }

    int GetLength()
    {
        return strlen(Buffer);
    }

    operator const char *()
    {
        return Buffer;
    }
};

int main()
{
    MyString String1("Hello ");
    MyString String2(" world");

    cout << "Before assignment: " << endl;
    cout << String1 << String2 << endl;
    String2 = String1;
    cout << "Agter assignment String2 = String1: " << endl;
    cout << String1 << String2 << endl;

    return 0;
}