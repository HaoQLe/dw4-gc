#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igObjectList_register();
void igObject_register();
void igRegistryValue_fieldInit();
extern char lbl_80463E6C[];
extern char lbl_80463E80[];
extern char lbl_80472FA0[];
extern char lbl_80476724[];
extern char lbl_80476780[];
extern char lbl_804767E4[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D140[8];
extern char lbl_8055D148[8];
extern void *lbl_80561670;
extern void *lbl_80561674;
extern void *lbl_805621F4;
void *igRegistryValueList_getMeta();
void *igRegistryValueList_vtableRead();
void fn_80026F8C();
void igRegistryValueList_register();
void *igRegistryValueList_getMetaCall();
void *igRegistryValue_getMeta();
void *igRegistryValue_vtableRead();
void fn_8002717C();
void igRegistryValue_register();
void *igRegistryValue_getMetaCall();
}
struct UnknownGenObject80026F1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800270B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800270B4(){fn_8006665C(this);}
};
struct UnknownGenObject800270B4 : UnknownGenRoot800270B4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800270B4(){unknown00=lbl_80476724;}
};
extern "C" {
void *fn_80026EA4(){
 if(!lbl_80561670) lbl_80561670=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561670;
}
void *igRegistryValueList_getMeta(){
 if(!lbl_80561670 || !(reinterpret_cast<unsigned int *>(lbl_80561670)[0x24/4]&4)) fn_80026F8C();
 return lbl_80561670;
}
void *igRegistryValueList_vtableRead(){
 UnknownGenObject80026F1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804767E4;
 object.unknown00=lbl_80476780;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80026F8C(){
 fn_80066188((int)igRegistryValueList_register);
}
void igRegistryValueList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561670,(int)igObjectList_register,(int)fn_80024180,(int)igRegistryValueList_getMetaCall,(int)lbl_80463E6C,20,(int)igRegistryValueList_vtableRead,0,0,(int)lbl_8055D140);
}
void *igRegistryValueList_getMetaCall(){return igRegistryValueList_getMeta();}
void *fn_80027040(void *object){
 fn_8002717C();
 return fn_8006546C(lbl_80561674,object);
}
void *igRegistryValue_getMeta(){
 if(!lbl_80561674 || !(reinterpret_cast<unsigned int *>(lbl_80561674)[0x24/4]&4)) fn_8002717C();
 return lbl_80561674;
}
void *igRegistryValue_vtableRead(){
 UnknownGenObject800270B4 object;
 object.unknown00=lbl_80476724;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002717C(){
 fn_80066188((int)igRegistryValue_register);
}
void igRegistryValue_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561674,(int)igObject_register,(int)fn_800237D0,(int)igRegistryValue_getMetaCall,(int)lbl_80463E80,20,(int)igRegistryValue_vtableRead,(int)igRegistryValue_fieldInit,0,(int)lbl_8055D148);
}
void *igRegistryValue_getMetaCall(){return igRegistryValue_getMeta();}
}
#pragma pop
