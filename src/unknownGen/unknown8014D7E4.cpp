#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void igCreateActorBounds_fieldInit();
void igOptBase_register();
void igOptVisitObject_register();
extern char igCreateAnimationDatabases_className[];
extern char lbl_8049F938[];
extern char igCreateActorBounds_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igCreateAnimationDatabases_vtable[];
extern char igCreateActorBounds_vtable[];
extern char lbl_804AAF48[];
extern void *igCreateAnimationDatabases_meta;
extern void *igCreateActorBounds_meta;
void *igCreateAnimationDatabases_getMeta();
void *igCreateAnimationDatabases_vtableRead();
void igCreateAnimationDatabases_registerNow();
void igCreateAnimationDatabases_register();
void *igCreateAnimationDatabases_getMetaCall();
void *igCreateActorBounds_getMeta();
void *igCreateActorBounds_vtableRead();
void igCreateActorBounds_registerNow();
void igCreateActorBounds_register();
void *igCreateActorBounds_getMetaCall();
}
struct UnknownGenRoot8014D820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D820(){fn_8006665C(this);}
};
struct UnknownGenObject8014D820_0 : UnknownGenRoot8014D820 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D820_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D820_1 : UnknownGenObject8014D820_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014D820_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014D820 : UnknownGenObject8014D820_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8014D820(){unknown00=igCreateAnimationDatabases_vtable;}
};
struct UnknownGenRoot8014DA4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014DA4C(){fn_8006665C(this);}
};
struct UnknownGenObject8014DA4C_0 : UnknownGenRoot8014DA4C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014DA4C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014DA4C : UnknownGenObject8014DA4C_0 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8014DA4C(){unknown00=igCreateActorBounds_vtable;}
};
extern "C" {
void *igCreateAnimationDatabases_getMeta(){
 if(!igCreateAnimationDatabases_meta || !(reinterpret_cast<unsigned int *>(igCreateAnimationDatabases_meta)[0x24/4]&4)) igCreateAnimationDatabases_registerNow();
 return igCreateAnimationDatabases_meta;
}
void *igCreateAnimationDatabases_vtableRead(){
 UnknownGenObject8014D820 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igCreateAnimationDatabases_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCreateAnimationDatabases_registerNow(){
 meta_registerNow((int)igCreateAnimationDatabases_register);
}
void igCreateAnimationDatabases_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCreateAnimationDatabases_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igCreateAnimationDatabases_getMetaCall,(int)igCreateAnimationDatabases_className,44,(int)igCreateAnimationDatabases_vtableRead,0,0,0);
}
void *igCreateAnimationDatabases_getMetaCall(){return igCreateAnimationDatabases_getMeta();}
void *igCreateActorBounds_getMeta(){
 if(!igCreateActorBounds_meta || !(reinterpret_cast<unsigned int *>(igCreateActorBounds_meta)[0x24/4]&4)) igCreateActorBounds_registerNow();
 return igCreateActorBounds_meta;
}
void *igCreateActorBounds_vtableRead(){
 UnknownGenObject8014DA4C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCreateActorBounds_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCreateActorBounds_registerNow(){
 meta_registerNow((int)igCreateActorBounds_register);
}
void igCreateActorBounds_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCreateActorBounds_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateActorBounds_getMetaCall,(int)igCreateActorBounds_className,60,(int)igCreateActorBounds_vtableRead,(int)igCreateActorBounds_fieldInit,0,(int)lbl_8049F938);
}
void *igCreateActorBounds_getMetaCall(){return igCreateActorBounds_getMeta();}
}
#pragma pop
