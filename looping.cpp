#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    //perulangan dengan FOR
    //mencetak tulisasn sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl
    for(int i=0; i<=4; i++{
        cout<<"Teknologi Informasi UMY"<<endl;
    })
    cout<<endl;
    //untuk mendapatkan urutan angka acak yg berbeda
    srand(time(0));

    //perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }
    cout<<"Bilangan acak while yang terakhir = "<<x <<endl;
    cout<<endl;

    //Perulangan dengan DO. . .WHILE
    cout<<"PERULANGAN DO. . .WHILE = "<<x <<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
    }while(x<=5);

    cout<<"Bilangan acak do-while yang terakhir = "<<x <<endl;
    cout<<endl;
}