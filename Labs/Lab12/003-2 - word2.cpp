#include <iostream>

using namespace std;

struct word
{
    char portuguese[25];
    char spanish[25];
    char english[25];
};

void showwords(word[]);

int main()
{
    word dictionary[10] = {"amor", "amor", "love", "raiva", "rabia", "rage"};
    cout << "Enter with a word for the dictionary." << "\nWord in portuguese: ";
    cin >> dictionary[2].portuguese;
    cout << "Spanish: ";
    cin >> dictionary[2].spanish;
    cout << "English: ";
    cin >> dictionary[2].english;
    showwords(dictionary);
}

void showwords(word dictionary[])
{
    cout << "The words in Portuguese in the dictionary are: " 
         << dictionary[0].portuguese << ", " << dictionary[1].portuguese << " and "
         << dictionary[2].portuguese << ".";
    cout << "\nThe words in Spanish in the dictionary are: " << dictionary[0].spanish 
         << ", " << dictionary[1].spanish << " and " << dictionary[2].spanish << ".";
    cout << "\nThe words in English in the dictionary are: " << dictionary[0].english 
         << ", " << dictionary[1].english << " and " << dictionary[2].english << ".";
}