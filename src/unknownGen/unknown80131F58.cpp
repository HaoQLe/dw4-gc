#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80132324();
void igOptBase_register();
void igStatistics_fieldInit();
extern char lbl_8049C00C[];
extern char lbl_8049C020[];
extern char igStatistics_className[];
extern char igStatistics_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F544[8];
extern char lbl_8055F54C[8];
extern void *lbl_805621F4;
extern void *lbl_80563B40;
extern void *igStatistics_meta;
void *igStatistics_getMeta();
void *igStatistics_vtableRead();
void igStatistics_registerNow();
void igStatistics_register();
void *igStatistics_getMetaCall();
}
struct UnknownGenRoot80132018 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132018(){fn_8006665C(this);}
};
struct UnknownGenObject80132018_0 : UnknownGenRoot80132018 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132018_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132018 : UnknownGenObject80132018_0 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80132018(){unknown00=igStatistics_vtable;}
};
extern "C" {
void *fn_80131F58(){
 void *value0;
 if(!lbl_80563B40){
  value0=fn_800635C8(lbl_8049C00C,lbl_8055F544,lbl_8055F54C,2);
  lbl_80563B40=value0;
 }
 return lbl_80563B40;
}
void *fn_80131FA0(){
 if(!igStatistics_meta) igStatistics_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStatistics_meta;
}
void *igStatistics_getMeta(){
 if(!igStatistics_meta || !(reinterpret_cast<unsigned int *>(igStatistics_meta)[0x24/4]&4)) igStatistics_registerNow();
 return igStatistics_meta;
}
void *igStatistics_vtableRead(){
 UnknownGenObject80132018 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igStatistics_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStatistics_registerNow(){
 meta_registerNow((int)igStatistics_register);
}
void igStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igStatistics_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igStatistics_getMetaCall,(int)igStatistics_className,52,(int)igStatistics_vtableRead,(int)igStatistics_fieldInit,(int)fn_80132324,(int)lbl_8049C020);
}
void *igStatistics_getMetaCall(){return igStatistics_getMeta();}
}
#pragma pop
