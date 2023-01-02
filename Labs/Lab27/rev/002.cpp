#include <iostream>

void DisplayError(int code, const char str[], void (*Ptr)(int))
{
    Ptr(code);
    std::cerr << str << std::endl;
}

void UserMsg(int code)
{
    std::cerr << "\nThe operation couldn't be concluded!\n\nSome problem was detected in the system that"
              << " made impossible to conclude the task. Contact the developer in dev@sys.com and send "
              << "the error report below"
              << "\n----------------\nSYS ERROR REPORT\n----------------\n"
              << "Code: " << code << "\nDescription: ";
}

void DevMsg(int code)
{
    std::cerr << "Error code " << code << ": ";
}

int main()
{
    DisplayError(1245, "failed to read file", UserMsg);
    std::cerr << std::endl;
    DisplayError(4521, "unexpected error during inicialization", DevMsg);

    return 0;
}