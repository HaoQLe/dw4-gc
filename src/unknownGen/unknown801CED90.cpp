#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
void igEndianSwappedEnbayaAnimationSource_registerNow();
void igEndianSwappedEnbayaAnimationSource_register();
void *igEndianSwappedEnbayaAnimationSource_parentMeta();
void *fn_801CEEB8();
}
struct UnknownGenObject801CEDCC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igEndianSwappedEnbayaAnimationSource_getMeta(){
 if(!igEndianSwappedEnbayaAnimationSource_meta || !(reinterpret_cast<unsigned int *>(igEndianSwappedEnbayaAnimationSource_meta)[0x24/4]&4)) igEndianSwappedEnbayaAnimationSource_registerNow();
 return igEndianSwappedEnbayaAnimationSource_meta;
}
void *igEndianSwappedEnbayaAnimationSource_vtableRead(){
 UnknownGenObject801CEDCC_0 object;
 fn_8006665C(&object);
 object.unknown00=igEnbayaAnimationSource_vtable;
 object.unknown00=igEndianSwappedEnbayaAnimationSource_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEndianSwappedEnbayaAnimationSource_registerNow(){
 meta_registerNow((int)igEndianSwappedEnbayaAnimationSource_register);
}
void igEndianSwappedEnbayaAnimationSource_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEndianSwappedEnbayaAnimationSource_meta,(int)igEnbayaAnimationSource_register,(int)igEndianSwappedEnbayaAnimationSource_parentMeta,(int)igEndianSwappedEnbayaAnimationSource_getMetaCall,(int)igEndianSwappedEnbayaAnimationSource_className,40,(int)igEndianSwappedEnbayaAnimationSource_vtableRead,(int)fn_801CEEB8,0,0);
}
void *igEndianSwappedEnbayaAnimationSource_parentMeta(){return igEnbayaAnimationSource_meta;}
void *fn_801CEEB8(){
 void *value0=igEndianSwappedEnbayaAnimationSource_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igEnbayaAnimationSource_getMetaCall;
 return value0;
}
}
#pragma pop
