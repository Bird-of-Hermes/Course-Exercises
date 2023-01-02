#include <iostream>
using namespace std;

void (*OnClick)(void);

void Mensagem()
{
    cout << "Botão Pressionado!" << endl;
}

void CreateButton(int a, int b, void (*OnClick)(void))
{
    cout << "Button created at position " << a << ", " << b << endl;
    ::OnClick = OnClick;
}


int main()
{
    CreateButton(10, 10, Mensagem);
    // simulando pressionamento
    cout << "Pressionar Botao? ";
    char resposta;
    cin >> resposta;
    if(resposta == 's' || resposta == 'S')
    {
        OnClick();
    }

    return 0;
}