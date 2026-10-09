#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void igSubTextureBindAttr_fieldInit();
void igTextureBindAttr_register();
extern char lbl_804786DC[];
extern char lbl_8047AF6C[];
extern char lbl_8047B198[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562548;
extern void *lbl_805625B0;
void *igSubTextureBindAttr_getMeta();
void *igSubTextureBindAttr_vtableRead();
void fn_800B007C();
void igSubTextureBindAttr_register();
void *igSubTextureBindAttr_getMetaCall();
void *igSubTextureBindAttr_parentMeta();
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){fn_8006665C(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=lbl_8047AF6C;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=lbl_8047B198;}
};
extern "C" {
void *igSubTextureBindAttr_getMeta(){
 if(!lbl_805625B0 || !(reinterpret_cast<unsigned int *>(lbl_805625B0)[0x24/4]&4)) fn_800B007C();
 return lbl_805625B0;
}
void *igSubTextureBindAttr_vtableRead(){
 UnknownGenObject800AFFCC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AF6C;
 object.unknown0C.value=0;
 object.unknown00=lbl_8047B198;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B007C(){
 fn_80066188((int)igSubTextureBindAttr_register);
}
void igSubTextureBindAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625B0,(int)igTextureBindAttr_register,(int)igSubTextureBindAttr_parentMeta,(int)igSubTextureBindAttr_getMetaCall,(int)lbl_804786DC,44,(int)igSubTextureBindAttr_vtableRead,(int)igSubTextureBindAttr_fieldInit,0,0);
}
void *igSubTextureBindAttr_getMetaCall(){return igSubTextureBindAttr_getMeta();}
void *igSubTextureBindAttr_parentMeta(){return lbl_80562548;}
}
#pragma pop
