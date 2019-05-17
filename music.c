#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

#include "helpers.h"


int main(void)
{

int duration(string fraction);

  int x = atoi(fraction[0]);
  int y = atoi(fraction[2]);
  int dur;


int frequency(string note);

    int oct;
    int n = 0;
    if (strlen(note)==3)
    {
        oct = atoi(note[2]);
        char accident = note [1];

        if (accident=='#')
        {
         n += 1;
        }
        else if (accident == 'b')
        {
            n -= 1;
        }
    }
        else
        {
            oct = atoi(note[1]);
        }
        char letter = note[0];
        if (letter=='A')
        {
            n += 0;
        }
        else if (letter=='B')
        {
            n += 2;
        }
        else if (letter=='C')
        {
            n -= 9;
        }
        else if (letter=='D')
        {
            n -= 7;
        }
        else if (letter=='E')
        {
            n -= 5;
        }
        else if (letter=='F')
        {
            n -= 4;
        }
        else if (letter=='G')
        {
            n -= 2;
        }
        n += (oct-4) * 12;

        float power = n/12;
        float f = round(pow(2,power)*440);
        return f;
}
bool is_rest(string s);


}


