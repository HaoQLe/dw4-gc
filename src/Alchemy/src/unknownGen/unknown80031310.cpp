#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80047080();
void *fn_800470A0();
void *meta_createInstance(void *,void *);
void fn_80065D94(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObject_register();
extern char igErrorHandler_className[];
extern char igErrorHandler_vtable[];
extern void *igErrorHandler_meta;
void *igErrorHandler_getMeta();
void *igErrorHandler_vtableRead();
void igErrorHandler_arkRegister();
void igErrorHandler_register();
void *igErrorHandler_getMetaCall();
void fn_80031310();
void *fn_80031338();
void *fn_80031358();
}
struct UnknownGenObject80031210_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void fn_80031310(){
 fn_80065D94((int)fn_80031358);
}
void *fn_80031338(){return fn_80047080();}
void *fn_80031358(){return fn_800470A0();}
}
#pragma pop
