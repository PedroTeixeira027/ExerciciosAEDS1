#include <iostream>
using namespace std;

int main() {
  bool est·Ensolarado = true;
  bool est·Chovendo = false;

  cout << "Est· ensolarado? " << boolalpha << est·Ensolarado << endl;
  cout << "Est· chovendo? " << boolalpha << est·Chovendo << endl;

  if (est·Ensolarado) {
    cout << "Est· ensolarado hoje!" << endl;
  } else {
    cout << "N„o est· ensolarado hoje." << endl;
  }

  return 0;
}