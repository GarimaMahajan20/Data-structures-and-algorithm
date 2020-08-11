#include <iostream>
using namespace std;

bool isPrime(int n) {

  if (n == 1) {
    return false;
  }

  for (int i = 2; i*i < n; i++) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
	// your code goes here
	int n=23;
	if(isPrime(n))
		cout<<n<<" is a prime number";
	else
		cout<<n<<" is not a prime number";
	return 0;
}
