#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801BDB1C();
void igIntersectTraversal_fieldInit();
void igTraversal_register();
extern char lbl_804AF1D0[];
extern char lbl_804AF1E8[];
extern char lbl_804B326C[];
extern char lbl_804B4474[];
extern void *lbl_805621F4;
extern void *lbl_80564668;
extern void *lbl_80564E3C;
void *igIntersectTraversal_getMeta();
void *igIntersectTraversal_vtableRead();
void fn_801BD904();
void igIntersectTraversal_register();
void *igIntersectTraversal_getMetaCall();
void *fn_801BD9C8();
}
struct UnknownGenRoot801BD744 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BD744(){fn_8006665C(this);}
};
struct UnknownGenObject801BD744_0 : UnknownGenRoot801BD744 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BD744_0(){unknown00=lbl_804B326C;}
};
struct UnknownGenObject801BD744 : UnknownGenObject801BD744_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801BD744(){unknown00=lbl_804B4474;}
};
extern "C" {
void *fn_801BD6CC(){
 if(!lbl_80564E3C) lbl_80564E3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E3C;
}
void *igIntersectTraversal_getMeta(){
 if(!lbl_80564E3C || !(reinterpret_cast<unsigned int *>(lbl_80564E3C)[0x24/4]&4)) fn_801BD904();
 return lbl_80564E3C;
}
void *igIntersectTraversal_vtableRead(){
 UnknownGenObject801BD744 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4474;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BD904(){
 fn_80066188((int)igIntersectTraversal_register);
}
void igIntersectTraversal_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E3C,(int)igTraversal_register,(int)fn_801BD9C8,(int)igIntersectTraversal_getMetaCall,(int)lbl_804AF1E8,64,(int)igIntersectTraversal_vtableRead,(int)igIntersectTraversal_fieldInit,(int)fn_801BDB1C,(int)lbl_804AF1D0);
}
void *igIntersectTraversal_getMetaCall(){return igIntersectTraversal_getMeta();}
void *fn_801BD9C8(){return lbl_80564668;}
}
#pragma pop
