#include <iostream>
using namespace std;

union color
{
    struct
    {
        uint8_t Red;
        uint8_t Green;
        uint8_t Blue;
        uint8_t Alpha;
    }RGBA;
    
    long long Integer32;
};

void readRGBA(color*);
void readInt32(color*);
void displaycolors(color*, bool);

int main()
{
    color Products, shelves;
    cout << "Enter a color in the format\nRGBA:\t";
    readRGBA(&Products);
    cout << "Enter a color in the format\nInt32:\t";
    readInt32(&shelves);
    displaycolors(&Products, true);
    displaycolors(&shelves, false);

    return 0;
}

void readRGBA(color*pcolor)
{
    unsigned short r, g, b, a;
    cin >> r >> g >> b >> a;
    pcolor->RGBA.Red = (uint8_t)r;
    pcolor->RGBA.Green = (uint8_t)g;
    pcolor->RGBA.Blue = (uint8_t)b;
    pcolor->RGBA.Alpha = (uint8_t)a;
}

void readInt32(color*pcolor)
{
    cin >> pcolor->Integer32;
}

void displaycolors(color*pcolor, bool type)
{
	if (type == true)
	{
		cout << "RGBA("
			<< (int)pcolor->RGBA.Red   << ","
			<< (int)pcolor->RGBA.Green << ","
			<< (int)pcolor->RGBA.Blue  << ","
			<< (int)pcolor->RGBA.Alpha << ")" << endl;
	}
	else
	{
		cout << pcolor->Integer32 << endl;
	}
}