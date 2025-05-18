#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

  char names[MAX][50];
  int weights[MAX];
  int n;
  int threshold = 15;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s", names[i]);
    scanf("%d", &weights[i]);
  }

  int count = 0;
  int max_weight = -9999;
  char max_name[50] = {};

  for (int i = 0; i < n; i++) {
    if (weights[i] > threshold) {
      count++;
      if (weights[i] > max_weight) {
        max_weight = weights[i];
        strcpy(max_name, names[i]);
      }
    }
  }
  printf("%d\n", count);
  if (max_weight != -9999) {
    printf("%s %d\n", max_name, max_weight);
  }
  return 0;
}
