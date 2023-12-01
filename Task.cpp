#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Task
{
public:
    float R;
    float y;
    string line;
    string a;

    double foo(float R)
    {
        if (R < -2)
        {
            y = -R - 2;
        }
        else if (R < 0)
        {
            y = sqrt(1 - pow(R + 1, 2));
        }
        else if (R < 4)
        {
            y = (sqrt(4 - pow(R - 2, 2))) * (-1);
        }
        else if (R < 6)
        {
            y = (-0.5) * R + 2;
        }
        else
        {
            y = -1;
        }
        return y;
    }
    void graphh()
    {
        foo(R);

        cout << "y: " << y << endl;
    }

    void File()
    {
        ofstream out("hello.txt");
        if (out.is_open())
        {
            out << a << endl;
        }
        out.close();
        ifstream in("Hello.txt");
        if (in.is_open())
        {
            getline(in, line);
            cout << line << endl;
        }
        in.close();
    }

    void arr()
    {
        ifstream fin("input.txt");
        ofstream fout("input.txt");
        for (int R = -3; R <= 7; R++)
        {
            foo(R);
            if (fout.is_open())
            {
                fout << y << endl;
            }
        }
        fout.close();
        float n;
        vector<float> arr;
        while (fin >> n)
        {
            arr.push_back(n);
        }
        cout << "y:\n";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        fin.close();
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    setlocale(LC_ALL, ".UTF8");

    Task task1;
    cout << "Введите X";
    cin >> task1.R;

    task1.graphh();
    cout << "Vvdeite text";
    cin >> task1.a;
    task1.File();
    task1.arr();
}