#include <iostream>
#include <string>
using namespace std;

int main(){
  typedef string username1, username2;
  typedef string password1, password2;
    
  cout << "Buat Username : ";
  cout >> username1;
  cout << "Buat Password : ";
  cin >> password1;
  cout << "Masukkan Username : ";
  cout >> username2;
  cout << "Masukkan Password : ";
  cout >> password2;
  if (username1 == username2) AND (password1 == password2) {
    cout << "Berhasil Masuk";
  } else {
    cout << "Username / Password Salah";
}
