#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029EF04(void *);
void *fn_8029F6F4();
extern void *lbl_80523BBC;
extern char lbl_80523BC0[];
extern char lbl_80524534[];
}
extern "C" {
void *fn_8029FB60(){return fn_8029F6F4();}
void fn_8029FB80(){
 fn_8029EF04(lbl_80523BBC);
 lbl_80523BBC=(void *)0;
 *reinterpret_cast<void * *>((lbl_80523BC0+0))=(void *)0;
 *reinterpret_cast<void * *>((lbl_80524534+0))=(void *)0;
}
}
#pragma pop
