#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F0D0();
void igObjectPropertyForNode_register();
extern char lbl_8049DDC0[];
extern char lbl_804A56B4[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8A8[8];
extern void *lbl_80563F8C;
void *igObjectPropertyForSegment_getMeta();
void *igObjectPropertyForSegment_vtableRead();
void fn_8013F014();
void igObjectPropertyForSegment_register();
void *igObjectPropertyForSegment_getMetaCall();
}
struct UnknownGenRoot8013EF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013EF48(){fn_8006665C(this);}
};
struct UnknownGenObject8013EF48_0 : UnknownGenRoot8013EF48 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013EF48_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013EF48_1 : UnknownGenObject8013EF48_0 {
 inline ~UnknownGenObject8013EF48_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013EF48 : UnknownGenObject8013EF48_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013EF48(){unknown00=lbl_804A56B4;}
};
extern "C" {
void *igObjectPropertyForSegment_getMeta(){
 if(!lbl_80563F8C || !(reinterpret_cast<unsigned int *>(lbl_80563F8C)[0x24/4]&4)) fn_8013F014();
 return lbl_80563F8C;
}
void *igObjectPropertyForSegment_vtableRead(){
 UnknownGenObject8013EF48 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A56B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013F014(){
 fn_80066188((int)igObjectPropertyForSegment_register);
}
void igObjectPropertyForSegment_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F8C,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForSegment_getMetaCall,(int)lbl_8049DDC0,44,(int)igObjectPropertyForSegment_vtableRead,(int)fn_8013F0D0,0,(int)lbl_8055F8A8);
}
void *igObjectPropertyForSegment_getMetaCall(){return igObjectPropertyForSegment_getMeta();}
}
#pragma pop
