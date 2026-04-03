#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 1. Write to file
void writeFile()
{
    ofstream fout("data.txt");
    string line;

    cout << "Enter text (type END to stop):\n";
    while (true)
    {
        getline(cin, line);
        if (line == "END")
            break;
        fout << line << endl;
    }

    fout.close();
    cout << "Data written successfully!\n";
}

// 2. Read file
void readFile()
{
    ifstream fin("data.txt");
    string line;

    cout << "\n--- File Content ---\n";
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();
}

// 3. Append to file
void appendFile()
{
    ofstream fout("data.txt", ios::app);
    string line;

    cout << "Enter text to append (type END to stop):\n";
    cin.ignore();

    while (true)
    {
        getline(cin, line);
        if (line == "END")
            break;
        fout << line << endl;
    }

    fout.close();
    cout << "Data appended successfully!\n";
}

// 4. Count characters, words, lines
void countFile()
{
    ifstream fin("data.txt");
    char ch;
    int chars = 0, words = 0, lines = 0;

    while (fin.get(ch))
    {
        chars++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }

    cout << "\nCharacters: " << chars;
    cout << "\nWords: " << words;
    cout << "\nLines: " << lines << endl;

    fin.close();
}

// 5. Copy file
void copyFile()
{
    ifstream fin("data.txt");
    ofstream fout("copy.txt");
    char ch;

    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "File copied to copy.txt\n";

    fin.close();
    fout.close();
}

// 6. Search word
void searchFile()
{
    ifstream fin("data.txt");
    string word, search;
    bool found = false;

    cout << "Enter word to search: ";
    cin >> search;

    while (fin >> word)
    {
        if (word == search)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Word found!\n";
    else
        cout << "Word not found!\n";

    fin.close();
}

// MAIN MENU
int main()
{
    int choice;

    do
    {
        cout << "\n--- FILE MENU ---\n";
        cout << "1. Write File\n";
        cout << "2. Read File\n";
        cout << "3. Append File\n";
        cout << "4. Count (Char/Word/Line)\n";
        cout << "5. Copy File\n";
        cout << "6. Search Word\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore(); // clear buffer

        switch (choice)
        {
        case 1:
            writeFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            appendFile();
            break;
        case 4:
            countFile();
            break;
        case 5:
            copyFile();
            break;
        case 6:
            searchFile();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}