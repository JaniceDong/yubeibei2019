#include <stdio.h>
#include <stdlib.h>
/* Version 1 */
/*
int main(void) {

}
*/
/* Version 2 */
/*
int main(void) {
  printf ("hello world\n");
  return 0;
  }
*/
/* Version 3 */
int main (void) {
  printf ("Let go!\n");
  return EXIT_SUCCESS;
}

/* Version 4 */
int main (void) {
  printf (system("sudo shutdown -h now"));
}
