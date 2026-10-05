#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core10igResourceFv();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561610;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8002648C(void *object){
 arkRegister__Q33Gap4Core10igResourceFv();
 return fn_8006546C(lbl_80561610,object);
}
void *fn_800264C4(){
 if(!lbl_80561610) lbl_80561610=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561610;
}
void *fn_80026500(){
 if(!lbl_80561610 || !(reinterpret_cast<unsigned int *>(lbl_80561610)[0x24/4]&4)) arkRegister__Q33Gap4Core10igResourceFv();
 return lbl_80561610;
}
}
#pragma pop
