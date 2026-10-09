#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptStatistics_fieldInit();
void igOptVisitObject_register();
extern char lbl_8049D7D0[];
extern char lbl_804A46AC[];
extern char lbl_804A47D8[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F7B8[8];
extern void *lbl_80563E6C;
void *igOptStatistics_getMeta();
void *igOptStatistics_vtableRead();
void fn_8013AD3C();
void igOptStatistics_register();
void *igOptStatistics_getMetaCall();
}
struct UnknownGenRoot8013AB84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013AB84(){fn_8006665C(this);}
};
struct UnknownGenObject8013AB84_0 : UnknownGenRoot8013AB84 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013AB84_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013AB84_1 : UnknownGenObject8013AB84_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8013AB84_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8013AB84 : UnknownGenObject8013AB84_1 {
 UnknownGenString unknown2C;
 char unknown30[16];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject8013AB84(){unknown00=lbl_804A47D8;}
};
extern "C" {
void *igOptStatistics_getMeta(){
 if(!lbl_80563E6C || !(reinterpret_cast<unsigned int *>(lbl_80563E6C)[0x24/4]&4)) fn_8013AD3C();
 return lbl_80563E6C;
}
void *igOptStatistics_vtableRead(){
 UnknownGenObject8013AB84 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A47D8;
 object.unknown2C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013AD3C(){
 fn_80066188((int)igOptStatistics_register);
}
void igOptStatistics_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E6C,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igOptStatistics_getMetaCall,(int)lbl_8049D7D0,68,(int)igOptStatistics_vtableRead,(int)igOptStatistics_fieldInit,0,(int)lbl_8055F7B8);
}
void *igOptStatistics_getMetaCall(){return igOptStatistics_getMeta();}
}
#pragma pop
