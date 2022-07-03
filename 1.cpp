class Matrix
{
public:
    int nnn[3][3]={};
    Matrix() {};
    Matrix(const Matrix& m0)
    {
        int (*m)[3] = new int[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m[i][j] = m0.nnn[i][j];
            }
            
        }
    }
    friend istream& operator>>(istream& in, Matrix& m);
    friend ostream& operator<<(ostream& ou, const Matrix& m);
    friend Matrix& operator+(const Matrix& m1, const Matrix& m2);
private:
    int m[3][3], size;
};
istream& operator>>(istream& in, Matrix& m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            in >> m.nnn[i][j];
        }
    }
    return in;
}
ostream& operator<<(ostream& ou, const Matrix& m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ou << m.nnn[i][j] << " ";
        }
        ou << endl;
    }
    return ou;
}

Matrix& operator+(const Matrix& m1, const Matrix& m2)
{
    static Matrix m3(m1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3.nnn[i][j] = m1.nnn[i][j] + m2.nnn[i][j];
        }
    }
    return m3;
}

int main()
{
    Matrix a, b,c;
    cin >> a; cout << endl;
    cin >> b;
    c = a + b;
    cout << "m1:" << endl << a << endl << "m2:" << endl << b << endl;
    cout << "m3:" << endl << c;
}