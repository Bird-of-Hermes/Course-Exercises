#include <iostream>
using namespace std;

enum FormatType {JPG=1, PNG, BMP}; // image format type

struct Image
{
    char Name [25];
    unsigned short Height;
    unsigned short Width;
    FormatType Format;
};

void Details(Image*); // prototype

int main()
{
    Image DogPicture = {"Deus Vult", 1920, 1080, PNG};
    Details(&DogPicture);
}

void Details(Image*ptr)
{   
    switch (ptr->Format)
    {
    case 1:
        cout << "The image \"" << ptr->Name << ".jpg\" with size " << ptr->Height
         << "x" << ptr->Width << " has JPG format.";
        break;
    case 2:
        cout << "The image \"" << ptr->Name << ".png\" with size " << ptr->Height
         << "x" << ptr->Width << " has PNG format.";
    case 3:
        cout << "The image \"" << ptr->Name << ".bmp\" with size " << ptr->Height
         << "x" << ptr->Width << " has BMP format.";
    default:
        break;
    }
}