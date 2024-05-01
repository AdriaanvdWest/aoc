#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int calculate_rect_prism_surface(int width, int height, int length) {
  return (2 * length * width) + (2 * width * height) + (2 * height * length);
}

int main(int argc, char *argv[]) {
  FILE *p_input_file = fopen("input.txt", "r");
  int line_count = 0;
  while (true) {
    int width, height, length;
    int parse_count =
        fscanf(p_input_file, "%dx%dx%d", &width, &length, &height);
    if (parse_count == 0) {
      printf("EOF reached!\n");
      break;
    }
    line_count++;
    if (line_count % 100 == 0) {
      printf("File position: %d\n", line_count);
    }
  }
  return EXIT_SUCCESS;
}
