#include <iostream>

using namespace std;

class Vemaybay
{
private:
    string tenchuyen;
    string ngaybay;
    long giave;

public:
    long getGiave()
    {
        return giave;
    }
    void nhap();
    void xuat();
};

class Nguoi
{
protected:
    string hoten;
    string gioitinh;
    int tuoi;

public:
    void nhap();
    void xuat();
};

class Hanhkhach : public Nguoi
{
private:
    int soluong;
    Vemaybay *ve = new Vemaybay;

public:
    void nhap();
    void xuat();
    long tongtien()
    {
        return (ve->getGiave()) * soluong;
    }
};

void Vemaybay ::nhap()
{
    cin.ignore();
    cout << "Nhap ten chuyen bay : ";
    getline(cin, tenchuyen);
    cout << "Nhap ngay bay: ";
    getline(cin, ngaybay);
    cout << "Nhap gia ve: ";
    cin >> giave;
}

void Nguoi ::nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap gioi tinh: ";
    getline(cin, gioitinh);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
}

void Hanhkhach ::nhap()
{
    Nguoi::nhap();
    ve->nhap();
    cout << "Nhap so luong: ";
    cin >> soluong;
}
void Hanhkhach ::xuat()
{
    cout << "Ho ten: " << hoten << "\tGioi tinh: " << gioitinh << "\tTuoi: " << tuoi << "\tTong gia: " << tongtien() << endl;
}
int main()
{
    int n;
    cout << "Nhap so luong hanh khach: ";
    do
    {
        cin >> n;
        if (n < 1)
        {
            cout << "So luong phai nhieu hon 1!";
        }
    } while (n < 1);
    Hanhkhach hk[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        hk[i].nhap();
        cin.ignore();
    }
    cout << "-------------Danh sach hanh khach----------------" << endl;
    for (int i = 0; i < n; i++)
    {
        hk[i].xuat();
    }
    return 0;
}