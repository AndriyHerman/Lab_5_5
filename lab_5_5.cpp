// Лабораторна робота № 5.5
// Варіант 4: Функція Аккермана
#include <iostream>

using namespace std;

// Рекурсивна функція Аккермана з підрахунком рівня та глибини рекурсії
int A(int m, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    cout << "level = " << level << endl;

    if (m == 0)
        return n + 1;
    else if (n == 0)
        return A(m - 1, 1, level + 1, depth);
    else
        return A(m - 1, A(m, n - 1, level + 1, depth), level + 1, depth);
}

int main()
{
    int m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    int depth = 0; // початкове значення глибини рекурсії
    int result = A(m, n, 1, depth);

    cout << "A(" << m << ", " << n << ") = " << result << endl;
    cout << "depth = " << depth << endl;

    return 0;
}