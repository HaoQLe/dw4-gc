#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010E280();
void fn_80284294();
void igDependencyOrderedList_register();
void igInfoManager_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80416C68[];
extern char lbl_80416C84[];
extern char lbl_80416C98[];
extern char lbl_80472FA0[];
extern char lbl_80475764[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CB2B4[];
extern char lbl_804CB2BC[];
extern char lbl_804CB2C4[];
extern char lbl_804CB2DC[];
extern char lbl_804CB340[];
extern char lbl_804CB3A4[];
extern char lbl_804CB400[];
extern void *lbl_80515D30;
extern void *lbl_80515D34;
extern void *lbl_80515D38;
extern void *lbl_805621F4;
void *igInfoManagerOrderedList_getMeta();
void *igInfoManagerOrderedList_vtableRead();
void fn_80286C0C();
void igInfoManagerOrderedList_register();
void *igInfoManagerOrderedList_getMetaCall();
void *igInfoManagerList_getMeta();
void *igInfoManagerList_vtableRead();
void fn_80286DDC();
void igInfoManagerList_register();
void *igInfoManagerList_getMetaCall();
void *igInfoManager_getMeta();
void fn_80286EE4();
void igInfoManager_register();
void *igInfoManager_getMetaCall();
}
struct UnknownGenRoot80286A9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80286A9C(){fn_8006665C(this);}
};
struct UnknownGenObject80286A9C_0 : UnknownGenRoot80286A9C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80286A9C_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject80286A9C_1 : UnknownGenObject80286A9C_0 {
 inline ~UnknownGenObject80286A9C_1(){unknown00=lbl_804CB400;}
};
struct UnknownGenObject80286A9C : UnknownGenObject80286A9C_1 {
 char unknown18[16];
 inline ~UnknownGenObject80286A9C(){unknown00=lbl_804CB3A4;}
};
struct UnknownGenObject80286D68_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802869FC(){
 if(!lbl_80515D30) lbl_80515D30=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D30;
}
void *igInfoManagerOrderedList_getMeta(){
 if(!lbl_80515D30 || !(reinterpret_cast<unsigned int *>(lbl_80515D30)[0x24/4]&4)) fn_80286C0C();
 return lbl_80515D30;
}
void *igInfoManagerOrderedList_vtableRead(){
 UnknownGenObject80286A9C object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804CB400;
 object.unknown00=lbl_804CB3A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80286C0C(){
 fn_80066188((int)igInfoManagerOrderedList_register);
}
void igInfoManagerOrderedList_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D30,(int)igDependencyOrderedList_register,(int)fn_8010E280,(int)igInfoManagerOrderedList_getMetaCall,(int)lbl_80416C68,28,(int)igInfoManagerOrderedList_vtableRead,0,0,(int)lbl_804CB2B4);
}
void *igInfoManagerOrderedList_getMetaCall(){return igInfoManagerOrderedList_getMeta();}
void *fn_80286CC8(){
 if(!lbl_80515D34) lbl_80515D34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D34;
}
void *igInfoManagerList_getMeta(){
 if(!lbl_80515D34 || !(reinterpret_cast<unsigned int *>(lbl_80515D34)[0x24/4]&4)) fn_80286DDC();
 return lbl_80515D34;
}
void *igInfoManagerList_vtableRead(){
 UnknownGenObject80286D68_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB340;
 object.unknown00=lbl_804CB2DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80286DDC(){
 fn_80066188((int)igInfoManagerList_register);
}
void igInfoManagerList_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D34,(int)igObjectList_register,(int)fn_80024180,(int)igInfoManagerList_getMetaCall,(int)lbl_80416C84,20,(int)igInfoManagerList_vtableRead,0,0,(int)lbl_804CB2BC);
}
void *igInfoManagerList_getMetaCall(){return igInfoManagerList_getMeta();}
void *igInfoManager_getMeta(){
 if(!lbl_80515D38 || !(reinterpret_cast<unsigned int *>(lbl_80515D38)[0x24/4]&4)) fn_80286EE4();
 return lbl_80515D38;
}
void fn_80286EE4(){
 fn_80066188((int)igInfoManager_register);
}
void igInfoManager_register(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515D38,(int)igNamedObject_register,(int)fn_80023CF4,(int)igInfoManager_getMetaCall,(int)lbl_80416C98,16,0,(int)igInfoManager_fieldInit,0,(int)lbl_804CB2C4);
}
void *igInfoManager_getMetaCall(){return igInfoManager_getMeta();}
}
#pragma pop
