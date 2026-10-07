#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006F024(int,int);
extern void *lbl_8055DBD8;
extern void *lbl_8055DC14;
extern char lbl_805622CD[1];
}
extern "C" {
void fn_8006F33C(){
 *reinterpret_cast<unsigned char *>((lbl_805622CD+0))=0;
 lbl_8055DC14=(void *)fn_8006F024;
 lbl_8055DBD8=(void *)5;
}
}
#pragma pop
