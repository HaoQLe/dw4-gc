#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801B623C();
void igAttrSet_register();
void igNodeRefResolver_fieldInit();
void *igNodeRefResolver_parentMeta();
void igObjectRefResolver_register();
void *igOverrideAttrSet_getMeta();
void igOverrideAttrSet_vtableRead();
extern char lbl_8047650C[];
extern char lbl_80493DD4[];
extern char lbl_804ADC84[];
extern char lbl_804ADC98[];
extern char lbl_804B3FD8[];
extern char lbl_8056038C[8];
extern void *lbl_80564B94;
extern void *lbl_80564B98;
void igOverrideAttrSet_register();
void *igOverrideAttrSet_getMetaCall();
void *igNodeRefResolver_getMeta();
void *igNodeRefResolver_vtableRead();
void fn_801B6CBC();
void igNodeRefResolver_register();
void *igNodeRefResolver_getMetaCall();
}
struct UnknownGenRoot801B6AE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6AE4(){fn_8006665C(this);}
};
struct UnknownGenObject801B6AE4_0 : UnknownGenRoot801B6AE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B6AE4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B6AE4_1 : UnknownGenObject801B6AE4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B6AE4_1(){unknown00=lbl_80493DD4;}
};
struct UnknownGenObject801B6AE4 : UnknownGenObject801B6AE4_1 {
 UnknownGenString unknown14;
 UnknownGenString unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject801B6AE4(){unknown00=lbl_804B3FD8;}
};
extern "C" {
void fn_801B69F8(){
 fn_80066188((int)igOverrideAttrSet_register);
}
void igOverrideAttrSet_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B94,(int)igAttrSet_register,(int)fn_801B623C,(int)igOverrideAttrSet_getMetaCall,(int)lbl_804ADC84,40,(int)igOverrideAttrSet_vtableRead,0,0,0);
}
void *igOverrideAttrSet_getMetaCall(){return igOverrideAttrSet_getMeta();}
void *igNodeRefResolver_getMeta(){
 if(!lbl_80564B98 || !(reinterpret_cast<unsigned int *>(lbl_80564B98)[0x24/4]&4)) fn_801B6CBC();
 return lbl_80564B98;
}
void *igNodeRefResolver_vtableRead(){
 UnknownGenObject801B6AE4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B3FD8;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B6CBC(){
 fn_80066188((int)igNodeRefResolver_register);
}
void igNodeRefResolver_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B98,(int)igObjectRefResolver_register,(int)igNodeRefResolver_parentMeta,(int)igNodeRefResolver_getMetaCall,(int)lbl_804ADC98,40,(int)igNodeRefResolver_vtableRead,(int)igNodeRefResolver_fieldInit,0,(int)lbl_8056038C);
}
void *igNodeRefResolver_getMetaCall(){return igNodeRefResolver_getMeta();}
}
#pragma pop
