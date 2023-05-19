#include <iostream>//подключаем директиву для вывода и получ информ.
using namespace std;
int main()// стартовая функция
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    char op;
    while (true) {
        cout << "Выберите действие :\n  1.Сложение\n  2.Вычитание\n 3.Умножение\n  4.Деление\n  5.Остаток от деления\n 6.Фибонначи\n 7.Выход \n";
        cin >> op;
        switch (op) {
        case '1':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a + b << '\n';
            system("pause");
            system("cls");
            break;
        case '2':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a - b << '\n';
            system("pause");
            system("cls");
            break;
        case '3':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0) {
                cout << "Нельзя умножать на 0\n";
            }
            else {
                cout << a * b << '\n';
            }          
            system("pause");
            system("cls");
            break;
        case '4':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0) {
                cout << "Нельзя делить на 0\n";
            }
            else {
                cout <<a / b << '\n';
            }
            system("pause");
            system("cls");
            break;
        case '5':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            if (b == 0) {
                cout << "Нельзя делить на 0\n";
            }
            else {
                cout << a % b << '\n';
            }
            system("pause");
            system("cls");
            break;
        case '6':
        {
            cout << "Введите количество иттераций: \n";
            int n; cin >> n;
            int sum = 0, fib = 0, fib1 = 1;
            cout << "0, ";
            for (int i = 0; i < n; i++)
            {
                fib += fib1;
                fib1 = fib - fib1;
                cout << fib << ", ";
                sum += fib;

            }
            cout << endl << sum << '\n';
        }
        system("pause");
        system("cls");
        break;
        case '7':
            system("cls");
            exit(0);
        default:
            printf("Не правильный выбор, повтори ещё раз\n");
        }
    }
    return 0;
    
    
}
    



