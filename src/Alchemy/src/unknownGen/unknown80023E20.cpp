#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *igGamecubeThread_getMeta();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igSymbolTable_fieldInit();
extern char lbl_804633A8[];
extern char lbl_804633C4[];
extern char lbl_804633D4[];
extern char lbl_804633E4[];
extern char lbl_80470D7C[];
extern char lbl_80472FA0[];
extern char lbl_80476BB4[];
extern char lbl_80476C18[];
extern char lbl_80476C7C[];
extern char lbl_80476CE0[];
extern char lbl_80476D44[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8055D080[8];
extern char lbl_8055D088[8];
extern void *lbl_80561530;
extern void *lbl_80561534;
extern void *lbl_80561538;
extern void *lbl_80561708;
extern void *lbl_80561730;
extern void *lbl_805621F4;
void *igNonRefCountedThreadList_getMeta();
void *igNonRefCountedThreadList_vtableRead();
void fn_80023F28();
void igNonRefCountedThreadList_register();
void *igNonRefCountedThreadList_getMetaCall();
void *fn_80023FDC();
void *igThreadList_getMeta();
void *igThreadList_vtableRead();
void fn_800240CC();
void igThreadList_register();
void *igThreadList_getMetaCall();
void *fn_80024180();
void *igSymbolTable_getMeta();
void *igSymbolTable_vtableRead();
void fn_80024334();
void igSymbolTable_register();
void *igSymbolTable_getMetaCall();
}
struct UnknownGenObject80023EB8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8002405C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800241FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800241FC(){fn_8006665C(this);}
};
struct UnknownGenObject800241FC : UnknownGenRoot800241FC {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800241FC(){unknown00=lbl_80470D7C;}
};
extern "C" {
void *igGamecubeThread_getMetaCall(){return igGamecubeThread_getMeta();}
void *fn_80023E40(){
 if(!lbl_80561530) lbl_80561530=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561530;
}
void *igNonRefCountedThreadList_getMeta(){
 if(!lbl_80561530 || !(reinterpret_cast<unsigned int *>(lbl_80561530)[0x24/4]&4)) fn_80023F28();
 return lbl_80561530;
}
void *igNonRefCountedThreadList_vtableRead(){
 UnknownGenObject80023EB8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_80476D44;
 object.unknown00=lbl_80476CE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80023F28(){
 fn_80066188((int)igNonRefCountedThreadList_register);
}
void igNonRefCountedThreadList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561530,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedThreadList_getMetaCall,(int)lbl_804633A8,20,(int)igNonRefCountedThreadList_vtableRead,0,0,(int)lbl_8055D080);
}
void *igNonRefCountedThreadList_getMetaCall(){return igNonRefCountedThreadList_getMeta();}
void *fn_80023FDC(){return lbl_80561730;}
void *fn_80023FE4(){
 if(!lbl_80561534) lbl_80561534=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561534;
}
void *igThreadList_getMeta(){
 if(!lbl_80561534 || !(reinterpret_cast<unsigned int *>(lbl_80561534)[0x24/4]&4)) fn_800240CC();
 return lbl_80561534;
}
void *igThreadList_vtableRead(){
 UnknownGenObject8002405C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476C18;
 object.unknown00=lbl_80476BB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800240CC(){
 fn_80066188((int)igThreadList_register);
}
void igThreadList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561534,(int)igObjectList_register,(int)fn_80024180,(int)igThreadList_getMetaCall,(int)lbl_804633C4,20,(int)igThreadList_vtableRead,0,0,(int)lbl_8055D088);
}
void *igThreadList_getMetaCall(){return igThreadList_getMeta();}
void *fn_80024180(){return lbl_80561708;}
void *fn_80024188(void *object){
 fn_80024334();
 return fn_8006546C(lbl_80561538,object);
}
void *igSymbolTable_getMeta(){
 if(!lbl_80561538 || !(reinterpret_cast<unsigned int *>(lbl_80561538)[0x24/4]&4)) fn_80024334();
 return lbl_80561538;
}
void *igSymbolTable_vtableRead(){
 UnknownGenObject800241FC object;
 object.unknown00=lbl_80470D7C;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80024334(){
 fn_80066188((int)igSymbolTable_register);
}
void igSymbolTable_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561538,(int)igObject_register,(int)fn_800237D0,(int)igSymbolTable_getMetaCall,(int)lbl_804633E4,44,(int)igSymbolTable_vtableRead,(int)igSymbolTable_fieldInit,0,(int)lbl_804633D4);
}
void *igSymbolTable_getMetaCall(){return igSymbolTable_getMeta();}
}
#pragma pop
