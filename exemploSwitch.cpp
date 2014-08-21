#include <iostream>

using namespace std;

int main () {

int x;
  cout << ("Digite um valor : ");
  cin >> x;
switch (x){               // switch irá passar de caso em caso, testando cada um deles. se nem um atender 
  case 1:                 // a algum caso, ele ira para "default".
    cout << "x = 1 !";     
      break;
  case 2:
    cout << "x >1 e <3 !";
      break;
  case 3:
    cout << "x não é 1 nem 2,e sim 3!";
      break;
  case 300:
    cout << "digite valor menor";
      break;
  default:
    cout << "x não é 1,2 nem 3";
    
  }

}




}
