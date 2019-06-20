#include <iostream>
using namespace std;
#include <string.h>

class MyString
{
private:
    char *Buffer;

public:
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

    // copy assignment operator
    MyString &operator=(const MyString &CopySource)
    {
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

    operator const char *()
    {
        return Buffer;
    }

    ~MyString()
    {
        delete[] Buffer;
    }
};

int main()
{
    MyString string1("Hello ");
    MyString string2(" world");

    cout << "Before assignment: " << endl;
    cout << string1 << string2 << endl;
    string2 = string1;
    cout << "After assignment string2 = string1: " << endl;
    cout << string1 << string2 << endl;

    return 0;
}