#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igObject_register();
void igShaderData_fieldInit();
extern char lbl_804ACB0C[];
extern char lbl_804ACB1C[];
extern char lbl_804B3B28[];
extern void *lbl_805621F4;
extern void *lbl_805648F8;
void *igShaderData_getMeta();
void *igShaderData_vtableRead();
void fn_801B150C();
void igShaderData_register();
void *igShaderData_getMetaCall();
}
struct UnknownGenRoot801B13D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B13D4(){fn_8006665C(this);}
};
struct UnknownGenObject801B13D4 : UnknownGenRoot801B13D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801B13D4(){unknown00=lbl_804B3B28;}
};
extern "C" {
void *fn_801B135C(){
 if(!lbl_805648F8) lbl_805648F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648F8;
}
void *igShaderData_getMeta(){
 if(!lbl_805648F8 || !(reinterpret_cast<unsigned int *>(lbl_805648F8)[0x24/4]&4)) fn_801B150C();
 return lbl_805648F8;
}
void *igShaderData_vtableRead(){
 UnknownGenObject801B13D4 object;
 object.unknown00=lbl_804B3B28;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B150C(){
 fn_80066188((int)igShaderData_register);
}
void igShaderData_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648F8,(int)igObject_register,(int)fn_800237D0,(int)igShaderData_getMetaCall,(int)lbl_804ACB1C,24,(int)igShaderData_vtableRead,(int)igShaderData_fieldInit,0,(int)lbl_804ACB0C);
}
void *igShaderData_getMetaCall(){return igShaderData_getMeta();}
}
#pragma pop
