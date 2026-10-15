#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void igRotateMode_arkRegister();
extern char lbl_80462848[];
extern char lbl_804F0A98[];
extern char lbl_804F0AA4[];
extern void *lbl_8055C9D8;
extern void *igRotateMode_meta;
}
extern "C" {
void *fn_80406FA0(){
 if(!lbl_8055C9D8) lbl_8055C9D8=fn_800635C8(lbl_80462848,lbl_804F0A98,lbl_804F0AA4,0x3);
 return lbl_8055C9D8;
}
void *igRotateMode_create(void *object){
 igRotateMode_arkRegister();
 return meta_createInstance(igRotateMode_meta,object);
}
void *igRotateMode_getMeta(){
 if(!igRotateMode_meta || !(reinterpret_cast<unsigned int *>(igRotateMode_meta)[0x24/4]&4)) igRotateMode_arkRegister();
 return igRotateMode_meta;
}
}
#pragma pop
