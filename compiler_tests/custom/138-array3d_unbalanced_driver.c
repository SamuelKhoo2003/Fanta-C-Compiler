int sum(int x[2][3][4]);

int main()
{
    int x[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
                      {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}};

    if (sum(x) != 300)
    {
        return 1;
    }

    return 0;
}
