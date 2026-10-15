#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptVisitObject_register();
void igSmartCompileGraph_fieldInit();
extern char lbl_8049C33C[];
extern char igSmartCompileGraph_className[];
extern char igSmartCompileGraph_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igSmartCompileGraph_meta;
void *igSmartCompileGraph_getMeta();
void *igSmartCompileGraph_vtableRead();
void igSmartCompileGraph_registerNow();
void igSmartCompileGraph_register();
void *igSmartCompileGraph_getMetaCall();
}
struct UnknownGenRoot80132E4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132E4C(){igObject_construct(this);}
};
struct UnknownGenObject80132E4C_0 : UnknownGenRoot80132E4C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132E4C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132E4C_1 : UnknownGenObject80132E4C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80132E4C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80132E4C : UnknownGenObject80132E4C_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject80132E4C(){unknown00=igSmartCompileGraph_vtable;}
};
extern "C" {
void *igSmartCompileGraph_getMeta(){
 if(!igSmartCompileGraph_meta || !(reinterpret_cast<unsigned int *>(igSmartCompileGraph_meta)[0x24/4]&4)) igSmartCompileGraph_registerNow();
 return igSmartCompileGraph_meta;
}
void *igSmartCompileGraph_vtableRead(){
 UnknownGenObject80132E4C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igSmartCompileGraph_vtable;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSmartCompileGraph_registerNow(){
 meta_registerNow((int)igSmartCompileGraph_register);
}
void igSmartCompileGraph_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igSmartCompileGraph_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igSmartCompileGraph_getMetaCall,(int)igSmartCompileGraph_className,60,(int)igSmartCompileGraph_vtableRead,(int)igSmartCompileGraph_fieldInit,0,(int)lbl_8049C33C);
}
void *igSmartCompileGraph_getMetaCall(){return igSmartCompileGraph_getMeta();}
}
#pragma pop
