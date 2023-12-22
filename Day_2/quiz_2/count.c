#include <stdio.h>
#include <ctype.h>
int main()
{
    char input[100];
    printf("Enter input string: ");
    scanf("%s", input);
    char output[100];
    int outputIndex = 0;
    for (int i = 0; input[i] != '\0'; ++i) 
    {
        if (isalpha(input[i]))
        {
            output[outputIndex++] = input[i];
        } else {
            int count = 0;
            while (isdigit(input[i]))
            {
                count = count * 10 + (input[i] - '0');
                ++i;
            }
            --i;

            for (int j = 0; j < count; ++j)
            {
                output[outputIndex++] = input[i - 1];
            }
        }
    }
    output[outputIndex] = '\0';
    printf("Output: %s\n", output);
    return 0;
}
