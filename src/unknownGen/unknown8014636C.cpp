#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igInterfaced_fieldInit();
void igObject_register();
void igOptVisitObject_register();
extern char lbl_8049E7B8[];
extern char lbl_8049E7CC[];
extern char lbl_8049E7E8[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A63C8[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80564178;
extern void *lbl_8056417C;
void *igInternalizeShader_getMeta();
void *igInternalizeShader_vtableRead();
void fn_801464E8();
void igInternalizeShader_register();
void *igInternalizeShader_getMetaCall();
void *igInterfaced_getMeta();
void fn_801465D4();
void igInterfaced_register();
void *igInterfaced_getMetaCall();
}
struct UnknownGenRoot801463A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801463A8(){fn_8006665C(this);}
};
struct UnknownGenObject801463A8_0 : UnknownGenRoot801463A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801463A8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801463A8_1 : UnknownGenObject801463A8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801463A8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801463A8 : UnknownGenObject801463A8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801463A8(){unknown00=lbl_804A63C8;}
};
extern "C" {
void *igInternalizeShader_getMeta(){
 if(!lbl_80564178 || !(reinterpret_cast<unsigned int *>(lbl_80564178)[0x24/4]&4)) fn_801464E8();
 return lbl_80564178;
}
void *igInternalizeShader_vtableRead(){
 UnknownGenObject801463A8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A63C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801464E8(){
 fn_80066188((int)igInternalizeShader_register);
}
void igInternalizeShader_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564178,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igInternalizeShader_getMetaCall,(int)lbl_8049E7B8,44,(int)igInternalizeShader_vtableRead,0,0,0);
}
void *igInternalizeShader_getMetaCall(){return igInternalizeShader_getMeta();}
void *igInterfaced_getMeta(){
 if(!lbl_8056417C || !(reinterpret_cast<unsigned int *>(lbl_8056417C)[0x24/4]&4)) fn_801465D4();
 return lbl_8056417C;
}
void fn_801465D4(){
 fn_80066188((int)igInterfaced_register);
}
void igInterfaced_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056417C,(int)igObject_register,(int)fn_800237D0,(int)igInterfaced_getMetaCall,(int)lbl_8049E7E8,32,0,(int)igInterfaced_fieldInit,0,(int)lbl_8049E7CC);
}
void *igInterfaced_getMetaCall(){return igInterfaced_getMeta();}
}
#pragma pop
