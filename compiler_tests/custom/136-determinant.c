int det(int x[3][3])
{
    return x[0][0] * (x[1][1] * x[2][2] - x[1][2] * x[2][1])
        - x[0][1] * (x[1][0] * x[2][2] - x[1][2] * x[2][0])
        + x[0][2] * (x[1][0] * x[2][1] - x[1][1] * x[2][0]);
}