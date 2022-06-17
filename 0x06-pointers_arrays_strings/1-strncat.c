/**
* _strncat - a function that concatenates two strings
*
* @dest: pointer to destination input
* @src: pointer to source input
*
* Return: @dest
*/
 
 char *_strncat(char *dest, char *src, int n)
 {
int c, i;
c = 0;
/*find sie of desc array*/
while (dest[c])
c++;

/**
* src does not need to be null terminated
*if it contains n or more bytes
*/
for (i=0; i<n &&src[i] != '\0'; i++)
dest[c + 1] = src[i];
/*null terminated dest*/
dest[c + 1] = '\0';

return (dest);
}
