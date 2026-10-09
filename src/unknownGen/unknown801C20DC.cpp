#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801E4D7C();
void fn_801E4DA0();
void igDOFShader_fieldInit();
void *igEndianSwappedEnbayaAnimationSource_getMeta();
void igGroup_register();
extern char lbl_8047650C[];
extern char lbl_804AFC30[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B4E20[];
extern char lbl_805606BC[8];
extern void *lbl_805621F4;
extern void *lbl_80564FC0;
void *igDOFShader_getMeta();
void *igDOFShader_vtableRead();
void fn_801C236C();
void igDOFShader_register();
void *igDOFShader_getMetaCall();
}
struct UnknownGenRoot801C21B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C21B4(){fn_8006665C(this);}
};
struct UnknownGenObject801C21B4_0 : UnknownGenRoot801C21B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C21B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C21B4_1 : UnknownGenObject801C21B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C21B4_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C21B4_2 : UnknownGenObject801C21B4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C21B4_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801C21B4 : UnknownGenObject801C21B4_2 {
 char unknown20[44];
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject801C21B4(){unknown00=lbl_804B4E20;}
};
extern "C" {
void *igEndianSwappedEnbayaAnimationSource_getMetaCall(){return igEndianSwappedEnbayaAnimationSource_getMeta();}
void *fn_801C20FC(){return fn_801E4D7C();}
void fn_801C211C(){return fn_801E4DA0();}
void *fn_801C213C(){
 if(!lbl_80564FC0) lbl_80564FC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FC0;
}
void *igDOFShader_getMeta(){
 if(!lbl_80564FC0 || !(reinterpret_cast<unsigned int *>(lbl_80564FC0)[0x24/4]&4)) fn_801C236C();
 return lbl_80564FC0;
}
void *igDOFShader_vtableRead(){
 UnknownGenObject801C21B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4E20;
 object.unknown4C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C236C(){
 fn_80066188((int)igDOFShader_register);
}
void igDOFShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FC0,(int)igGroup_register,(int)fn_8011148C,(int)igDOFShader_getMetaCall,(int)lbl_804AFC30,80,(int)igDOFShader_vtableRead,(int)igDOFShader_fieldInit,0,(int)lbl_805606BC);
}
void *igDOFShader_getMetaCall(){return igDOFShader_getMeta();}
}
#pragma pop
