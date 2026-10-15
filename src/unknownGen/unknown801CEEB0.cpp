#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *igEnbayaAnimationSource_getMetaCall();
void igEnbayaAnimationSource_register();
void *igEndianSwappedEnbayaAnimationSource_getMetaCall();
extern char igEndianSwappedEnbayaAnimationSource_className[];
extern char igEndianSwappedEnbayaAnimationSource_vtable[];
extern char igEnbayaAnimationSource_vtable[];
extern void *igEnbayaAnimationSource_meta;
extern void *igEndianSwappedEnbayaAnimationSource_meta;
void *igEndianSwappedEnbayaAnimationSource_vtableRead();
void igEndianSwappedEnbayaAnimationSource_arkRegister();
void igEndianSwappedEnbayaAnimationSource_register();
void *igEndianSwappedEnbayaAnimationSource_parentMeta();
void *fn_801CEEB8();
}
struct UnknownGenObject801CEDCC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igEndianSwappedEnbayaAnimationSource_parentMeta(){return igEnbayaAnimationSource_meta;}
void *fn_801CEEB8(){
 void *value0=igEndianSwappedEnbayaAnimationSource_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igEnbayaAnimationSource_getMetaCall;
 return value0;
}
}
#pragma pop
