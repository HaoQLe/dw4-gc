#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igCamera_register();
void igDOFCamera_fieldInit();
extern char lbl_8047650C[];
extern char lbl_804B0E34[];
extern char lbl_804B4038[];
extern char lbl_804B52F8[];
extern char lbl_804B6F0C[];
extern char lbl_805607F0[8];
extern void *lbl_805651FC;
extern void *lbl_8056520C;
void *igDOFCamera_getMeta();
void *igDOFCamera_vtableRead();
void fn_801C5C84();
void igDOFCamera_register();
void *igDOFCamera_getMetaCall();
void *igDOFCamera_parentMeta();
}
struct UnknownGenRoot801C5B4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5B4C(){fn_8006665C(this);}
};
struct UnknownGenObject801C5B4C_0 : UnknownGenRoot801C5B4C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5B4C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C5B4C_1 : UnknownGenObject801C5B4C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5B4C_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C5B4C_2 : UnknownGenObject801C5B4C_1 {
 inline ~UnknownGenObject801C5B4C_2(){unknown00=lbl_804B6F0C;}
};
struct UnknownGenObject801C5B4C : UnknownGenObject801C5B4C_2 {
 char unknown14[52];
 inline ~UnknownGenObject801C5B4C(){unknown00=lbl_804B52F8;}
};
extern "C" {
void *igDOFCamera_getMeta(){
 if(!lbl_805651FC || !(reinterpret_cast<unsigned int *>(lbl_805651FC)[0x24/4]&4)) fn_801C5C84();
 return lbl_805651FC;
}
void *igDOFCamera_vtableRead(){
 UnknownGenObject801C5B4C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B6F0C;
 object.unknown00=lbl_804B52F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C5C84(){
 fn_80066188((int)igDOFCamera_register);
}
void igDOFCamera_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651FC,(int)igCamera_register,(int)igDOFCamera_parentMeta,(int)igDOFCamera_getMetaCall,(int)lbl_804B0E34,68,(int)igDOFCamera_vtableRead,(int)igDOFCamera_fieldInit,0,(int)lbl_805607F0);
}
void *igDOFCamera_getMetaCall(){return igDOFCamera_getMeta();}
void *igDOFCamera_parentMeta(){return lbl_8056520C;}
}
#pragma pop
