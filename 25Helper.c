#include"25Header.h"

BOOL CheckAlpha(char ch)
{
if((ch>=65) && (ch<=90) || (ch>=97) && (ch<=122))
{
return TRUE;
}
else
{
return FALSE;
}
}
