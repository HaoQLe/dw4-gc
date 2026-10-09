#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801BBBF0();
void igCamera_fieldInit();
void igNode_register();
extern char lbl_8047650C[];
extern char lbl_804B0E8C[];
extern char lbl_804B4038[];
extern char lbl_804B6F0C[];
extern void *lbl_805621F4;
extern void *lbl_8056520C;
void *igCamera_getMeta();
void *igCamera_vtableRead();
void fn_801C5FD8();
void igCamera_register();
void *igCamera_getMetaCall();
}
struct UnknownGenRoot801C5EB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5EB0(){fn_8006665C(this);}
};
struct UnknownGenObject801C5EB0_0 : UnknownGenRoot801C5EB0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5EB0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C5EB0_1 : UnknownGenObject801C5EB0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5EB0_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C5EB0 : UnknownGenObject801C5EB0_1 {
 char unknown14[36];
 inline ~UnknownGenObject801C5EB0(){unknown00=lbl_804B6F0C;}
};
extern "C" {
void *fn_801C5E00(void *object){
 fn_801C5FD8();
 return fn_8006546C(lbl_8056520C,object);
}
void *fn_801C5E38(){
 if(!lbl_8056520C) lbl_8056520C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056520C;
}
void *igCamera_getMeta(){
 if(!lbl_8056520C || !(reinterpret_cast<unsigned int *>(lbl_8056520C)[0x24/4]&4)) fn_801C5FD8();
 return lbl_8056520C;
}
void *igCamera_vtableRead(){
 UnknownGenObject801C5EB0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B6F0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C5FD8(){
 fn_80066188((int)igCamera_register);
}
void igCamera_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056520C,(int)igNode_register,(int)fn_801BBBF0,(int)igCamera_getMetaCall,(int)lbl_804B0E8C,56,(int)igCamera_vtableRead,(int)igCamera_fieldInit,0,0);
}
void *igCamera_getMetaCall(){return igCamera_getMeta();}
}
#pragma pop
