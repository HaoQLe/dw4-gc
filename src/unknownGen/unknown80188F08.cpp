#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562F78;
extern void *lbl_80564A14;
}
extern "C" {
void *fn_80188F08(){return lbl_80562F78;}
void *fn_80188F10(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)p1;
 return (void *)0;
}
void fn_80188F1C(){}
int fn_80188F20(){return 1;}
void *fn_80188F28(){return lbl_80564A14;}
}
#pragma pop
