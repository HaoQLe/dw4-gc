#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013467C();
void igHierarchyChangedEvent_register();
void igReplacedChildEvent_fieldInit();
extern char lbl_8049C830[];
extern char lbl_804A6460[];
extern char lbl_804AA6A4[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055F5F4[8];
extern void *lbl_80563C64;
void *igReplacedChildEvent_getMeta();
void *igReplacedChildEvent_vtableRead();
void fn_80134FF4();
void igReplacedChildEvent_register();
void *igReplacedChildEvent_getMetaCall();
}
struct UnknownGenRoot80134EC4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134EC4(){fn_8006665C(this);}
};
struct UnknownGenObject80134EC4 : UnknownGenRoot80134EC4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80134EC4(){unknown00=lbl_804AA6A4;}
};
extern "C" {
void *fn_80134E50(void *object){
 fn_80134FF4();
 return fn_8006546C(lbl_80563C64,object);
}
void *igReplacedChildEvent_getMeta(){
 if(!lbl_80563C64 || !(reinterpret_cast<unsigned int *>(lbl_80563C64)[0x24/4]&4)) fn_80134FF4();
 return lbl_80563C64;
}
void *igReplacedChildEvent_vtableRead(){
 UnknownGenObject80134EC4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 object.unknown00=lbl_804AA6A4;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80134FF4(){
 fn_80066188((int)igReplacedChildEvent_register);
}
void igReplacedChildEvent_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C64,(int)igHierarchyChangedEvent_register,(int)fn_8013467C,(int)igReplacedChildEvent_getMetaCall,(int)lbl_8049C830,44,(int)igReplacedChildEvent_vtableRead,(int)igReplacedChildEvent_fieldInit,0,(int)lbl_8055F5F4);
}
void *igReplacedChildEvent_getMetaCall(){return igReplacedChildEvent_getMeta();}
}
#pragma pop
