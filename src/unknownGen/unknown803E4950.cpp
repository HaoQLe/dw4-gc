#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028FA64();
void fn_8028FAF8();
void fn_80296C80();
void fn_80296C98();
void fn_803F8D84(int,int,int);
extern char lbl_80545838[];
}
extern "C" {
int fn_803E4950(){
 fn_80296C80();
 fn_8028FA64();
 return 0;
}
int fn_803E4978(){
 fn_8028FAF8();
 fn_80296C98();
 fn_803F8D84((int)lbl_80545838,0,7);
 return 0;
}
}
#pragma pop
