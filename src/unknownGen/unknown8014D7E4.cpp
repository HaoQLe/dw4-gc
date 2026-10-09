#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void igCreateActorBounds_fieldInit();
void igOptBase_register();
void igOptVisitObject_register();
extern char lbl_8049F91C[];
extern char lbl_8049F938[];
extern char lbl_8049F948[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A724C[];
extern char lbl_804A72E4[];
extern char lbl_804AAF48[];
extern void *lbl_80564400;
extern void *lbl_80564404;
void *igCreateAnimationDatabases_getMeta();
void *igCreateAnimationDatabases_vtableRead();
void fn_8014D960();
void igCreateAnimationDatabases_register();
void *igCreateAnimationDatabases_getMetaCall();
void *igCreateActorBounds_getMeta();
void *igCreateActorBounds_vtableRead();
void fn_8014DBEC();
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
 inline ~UnknownGenObject8014D820(){unknown00=lbl_804A724C;}
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
 inline ~UnknownGenObject8014DA4C(){unknown00=lbl_804A72E4;}
};
extern "C" {
void *igCreateAnimationDatabases_getMeta(){
 if(!lbl_80564400 || !(reinterpret_cast<unsigned int *>(lbl_80564400)[0x24/4]&4)) fn_8014D960();
 return lbl_80564400;
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
 object.unknown00=lbl_804A724C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D960(){
 fn_80066188((int)igCreateAnimationDatabases_register);
}
void igCreateAnimationDatabases_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564400,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igCreateAnimationDatabases_getMetaCall,(int)lbl_8049F91C,44,(int)igCreateAnimationDatabases_vtableRead,0,0,0);
}
void *igCreateAnimationDatabases_getMetaCall(){return igCreateAnimationDatabases_getMeta();}
void *igCreateActorBounds_getMeta(){
 if(!lbl_80564404 || !(reinterpret_cast<unsigned int *>(lbl_80564404)[0x24/4]&4)) fn_8014DBEC();
 return lbl_80564404;
}
void *igCreateActorBounds_vtableRead(){
 UnknownGenObject8014DA4C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A72E4;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014DBEC(){
 fn_80066188((int)igCreateActorBounds_register);
}
void igCreateActorBounds_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564404,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateActorBounds_getMetaCall,(int)lbl_8049F948,60,(int)igCreateActorBounds_vtableRead,(int)igCreateActorBounds_fieldInit,0,(int)lbl_8049F938);
}
void *igCreateActorBounds_getMetaCall(){return igCreateActorBounds_getMeta();}
}
#pragma pop
