#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptStatistics_fieldInit();
void igOptVisitObject_register();
extern char igOptStatistics_className[];
extern char lbl_804A46AC[];
extern char igOptStatistics_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F7B8[8];
extern void *igOptStatistics_meta;
void *igOptStatistics_getMeta();
void *igOptStatistics_vtableRead();
void igOptStatistics_registerNow();
void igOptStatistics_register();
void *igOptStatistics_getMetaCall();
}
struct UnknownGenRoot8013AB84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013AB84(){igObject_construct(this);}
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
 inline ~UnknownGenObject8013AB84(){unknown00=igOptStatistics_vtable;}
};
extern "C" {
void *igOptStatistics_getMeta(){
 if(!igOptStatistics_meta || !(reinterpret_cast<unsigned int *>(igOptStatistics_meta)[0x24/4]&4)) igOptStatistics_registerNow();
 return igOptStatistics_meta;
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
 object.unknown00=igOptStatistics_vtable;
 object.unknown2C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptStatistics_registerNow(){
 meta_registerNow((int)igOptStatistics_register);
}
void igOptStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptStatistics_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igOptStatistics_getMetaCall,(int)igOptStatistics_className,68,(int)igOptStatistics_vtableRead,(int)igOptStatistics_fieldInit,0,(int)lbl_8055F7B8);
}
void *igOptStatistics_getMetaCall(){return igOptStatistics_getMeta();}
}
#pragma pop
