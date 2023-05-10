#include <includes.h>

using namespace std;

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Rus");
    string filename = "test.txt";
    
    

    /* cmatch result;
    regex rule("([a-z]+)""([%]*)"); */
    set<string> mySet; // создаём объект класса множество
    map<int, int> myMap; // создаём объект класса словарь
    list<item> myList; // создаём объект класса список для данных типа struct item 


    

    

    fin.close();
    return 0;
}

int read_file(string &filename, set<string> &mySet)
{
    ifstream fin;
    fin.open(filename); // открываем поток на чтение из файла
    if(!fin.is_open()) // проверяем открылся ли поток
    {
        cout << "Ошибка открытия файла" << endl;
        while(cin.get() != '\n');
        return 1;
    }
    string input, stmp;
    while(!fin.get(ch) != '%') // 
    {
        if(regex_search(fin, result, rule))
        {

        }
        getline(fin, stmp); // считываем строку
        input.append(stmp); // добавляем её в конец строки
    }
}


/* string str = "email@host.ru"; // строка, которую надо проверить
    cmatch result; // хранит в себе результат работы метода regex_match
    regex regular("([\\w-]+)""(@)""([\\w-]+)""(\\.)""([a-z]{2,5})"); // хранит регулярное выражение, которое задаёт правило для проверки строки
    // [\\w] - строка содержит буквы и/или цифры и/или _
    // [\\s] - строка содержит пробелы
    // [] - формируем класс символов, которые могут содержаться в слове


    if(regex_match(str.c_str(), result, regular))
        cout << "yep" << endl;
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    while(cin.get() != '\n'); */