/*
 * line.c from rc-faq, rc shell faq
 */

#include <unistd.h>
int main ()
{
  unsigned char c;
  while (read (0, &c, 1) == 1 && c != '\n')
    write (1, &c, 1);
  write (1, "\n", 1);
  return c != '\n';
}
