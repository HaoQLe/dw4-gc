#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igMorphSequence_fieldInit();
void igObject_register();
extern char lbl_804AAFB8[];
extern char lbl_804AE734[];
extern char lbl_804AE740[];
extern char lbl_804B7DDC[];
extern void *lbl_805621F4;
extern void *lbl_80564CB4;
extern void *lbl_80564CB8;
extern void *lbl_80564CBC;
void *igMorphSequence_getMeta();
void *igMorphSequence_vtableRead();
void fn_801B9434();
void igMorphSequence_register();
void *igMorphSequence_getMetaCall();
}
struct UnknownGenRoot801B936C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B936C(){fn_8006665C(this);}
};
struct UnknownGenObject801B936C : UnknownGenRoot801B936C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[20];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject801B936C(){unknown00=lbl_804B7DDC;}
};
extern "C" {
void *fn_801B925C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB4) lbl_80564CB4=fn_800635C8(data+0x768,data+0x3730,data+0x373C,0x3);
 return lbl_80564CB4;
}
void *fn_801B92A8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB8) lbl_80564CB8=fn_800635C8(data+0x7A0,data+0x3754,data+0x3768,0x5);
 return lbl_80564CB8;
}
void *fn_801B92F4(){
 if(!lbl_80564CBC) lbl_80564CBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564CBC;
}
void *igMorphSequence_getMeta(){
 if(!lbl_80564CBC || !(reinterpret_cast<unsigned int *>(lbl_80564CBC)[0x24/4]&4)) fn_801B9434();
 return lbl_80564CBC;
}
void *igMorphSequence_vtableRead(){
 UnknownGenObject801B936C object;
 object.unknown00=lbl_804B7DDC;
 object.unknown0C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B9434(){
 fn_80066188((int)igMorphSequence_register);
}
void igMorphSequence_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564CBC,(int)igObject_register,(int)fn_800237D0,(int)igMorphSequence_getMetaCall,(int)lbl_804AE740,64,(int)igMorphSequence_vtableRead,(int)igMorphSequence_fieldInit,0,(int)lbl_804AE734);
}
void *igMorphSequence_getMetaCall(){return igMorphSequence_getMeta();}
}
#pragma pop
