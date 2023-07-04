#include <stdio.h>
/**
 * Recursion: The process of making a function call itself
 * Recursion: Is useful in breaking down  complicated problems into smaller problems that can be solved easily
 * Example:
 */
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
