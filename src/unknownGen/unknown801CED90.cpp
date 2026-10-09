#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *igEnbayaAnimationSource_getMetaCall();
void igEnbayaAnimationSource_register();
void *igEndianSwappedEnbayaAnimationSource_getMetaCall();
extern char lbl_804B2CD0[];
extern char lbl_804B313C[];
extern char lbl_804B4DAC[];
extern void *lbl_80564FA4;
extern void *lbl_805655F4;
void *igEndianSwappedEnbayaAnimationSource_vtableRead();
void fn_801CEE18();
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
 if(!lbl_805655F4 || !(reinterpret_cast<unsigned int *>(lbl_805655F4)[0x24/4]&4)) fn_801CEE18();
 return lbl_805655F4;
}
void *igEndianSwappedEnbayaAnimationSource_vtableRead(){
 UnknownGenObject801CEDCC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B4DAC;
 object.unknown00=lbl_804B313C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CEE18(){
 fn_80066188((int)igEndianSwappedEnbayaAnimationSource_register);
}
void igEndianSwappedEnbayaAnimationSource_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655F4,(int)igEnbayaAnimationSource_register,(int)igEndianSwappedEnbayaAnimationSource_parentMeta,(int)igEndianSwappedEnbayaAnimationSource_getMetaCall,(int)lbl_804B2CD0,40,(int)igEndianSwappedEnbayaAnimationSource_vtableRead,(int)fn_801CEEB8,0,0);
}
void *igEndianSwappedEnbayaAnimationSource_parentMeta(){return lbl_80564FA4;}
void *fn_801CEEB8(){
 void *value0=lbl_805655F4;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igEnbayaAnimationSource_getMetaCall;
 return value0;
}
}
#pragma pop
