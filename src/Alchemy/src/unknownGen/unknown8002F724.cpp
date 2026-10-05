#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002F840();
void *fn_8005068C();
void *fn_8006546C(void *,void *);
extern void *lbl_80561B18;
}
extern "C" {
void *fn_8002F724(){return fn_8005068C();}
void *fn_8002F744(void *object){
 fn_8002F840();
 return fn_8006546C(lbl_80561B18,object);
}
void *fn_8002F77C(){
 if(!lbl_80561B18 || !(reinterpret_cast<unsigned int *>(lbl_80561B18)[0x24/4]&4)) fn_8002F840();
 return lbl_80561B18;
}
}
#pragma pop
