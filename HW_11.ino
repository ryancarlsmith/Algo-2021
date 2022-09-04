//Ryan Carlsmith
//Algorithms
//Homework 11
//11/6/21


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

int factorialRecursive(int n) {
  if (n > 1) {
    return factorialRecursive(n - 1) * n;
  }
  else {
    return 1;
  }
}

int factorialIterative(int n) {
  int res = 1;
  if (n == 1) {
    return 1;
  }
  for (int i = 1; i < n; i++) {
    res *= i;
    return res;
  }

}
