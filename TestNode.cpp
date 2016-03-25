#include <iostream>
#include "Node.h"

using namespace std;

int main(int argc, char *argv[]) {
  Node<int> n;
  Node<float> n1;
  cout << n.getValue() << endl;

  return 0;
}