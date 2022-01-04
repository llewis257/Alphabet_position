#include <stdio.h>
#include <stdlib.h>
#define ARR_LENGTH 2097152



char *alphabet_position(const char *text) {
      char *new_string = (char *)(malloc (ARR_LENGTH * sizeof(char)));

      char *new_string_ptr = new_string;
      int ascii, alpha_pos, to_int;
      char *text_ptr= text;
      char *endptr;
      for(; *text_ptr; text_ptr++)
      {
        strtol(text_ptr, &endptr, 10);
        if (*endptr != '\0')
        {
            ascii = *text_ptr;



            if (ascii<91 && ascii>64)
            {
                alpha_pos = ascii-64;

                if (alpha_pos>9)
                {
                    sprintf(new_string_ptr, "%d ", alpha_pos);
                    new_string_ptr = new_string_ptr + 3;
                }
                else
                {
                    sprintf(new_string_ptr, "%d ", alpha_pos);
                    new_string_ptr = new_string_ptr +2;
                }



            }
            else if(ascii<123 && ascii>96)
            {
                alpha_pos = ascii-96;
                if (alpha_pos>9)
                {
                    sprintf(new_string_ptr, "%d ", alpha_pos);
                    new_string_ptr = new_string_ptr + 3;
                }
                else
                {
                    sprintf(new_string_ptr, "%d ", alpha_pos);
                    new_string_ptr = new_string_ptr +2;
                }
            }
          }
        else
          {
            printf("Found integer %s ", new_string_ptr);
          }
        }
    if (new_string != 0)
    {
        *(new_string_ptr-1) = '\0';
    }
    else
    {
        return "";
    }
      return new_string;
}


int main()
{

    //char text_[] = "The sunset sets at twelve o' clock.";
    //char text_[] = "4920364863";
    char text_[] = "1170044529";
    char *text_ptr_ = text_;
    printf("%s \n", alphabet_position(text_ptr_)); /* Supposed to print: "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"*/


    return 0;
}
