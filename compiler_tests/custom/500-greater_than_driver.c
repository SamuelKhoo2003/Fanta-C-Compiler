
int f(int x, int y);

int main()
{
    if (f(0, 0) != 0) return 1;
    if (f(0, 1) != 0) return 1;
    if (f(1, 0) != 1) return 1;
    if (f(-1, 1) != 0) return 1;
    if (f(1, -1) != 1) return 1;
    if (f(2, 3) != 0) return 1;
    if (f(3, 2) != 1) return 1;
    if (f(-2, -3) != 1) return 1;
    if (f(-3, -2) != 0) return 1;
    return 0;
}
