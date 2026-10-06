#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8051ABD0[];
void memset(int,int,int);
}
extern "C" {
int fn_8029A008(){
 memset((int)lbl_8051ABD0,0,3840);
 return 1;
}
}
#pragma pop
