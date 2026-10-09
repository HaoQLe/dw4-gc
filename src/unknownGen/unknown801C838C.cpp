#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800CB530();
void fn_801AA6DC();
void *fn_801D3BDC();
void fn_801D3C28(int);
void igAttrStack_fieldInit();
void igNonRefCountedObjectStack_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_804B1820[];
extern char lbl_804B1830[];
extern char lbl_804B1840[];
extern char lbl_804B6A10[];
extern char lbl_804B6A70[];
extern char lbl_804B6AD0[];
extern char lbl_804B6B34[];
extern char lbl_80560860[8];
extern void *lbl_805621F4;
extern void *lbl_8056534C;
extern void *lbl_80565350;
void *igAttrStackList_getMeta();
void *igAttrStackList_vtableRead();
void fn_801C84BC();
void igAttrStackList_register();
void *igAttrStackList_getMetaCall();
void *igAttrStack_getMeta();
void *igAttrStack_vtableRead();
void fn_801C869C();
void igAttrStack_register();
void *igAttrStack_getMetaCall();
}
struct UnknownGenObject801C844C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C85E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C85E4(){fn_8006665C(this);}
};
struct UnknownGenObject801C85E4 : UnknownGenRoot801C85E4 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[40];
 inline ~UnknownGenObject801C85E4(){unknown00=lbl_804B6A10;}
};
extern "C" {
void fn_801C838C(){
 fn_80065DBC((int)fn_801D3C28);
}
void *fn_801C83B4(){return fn_801D3BDC();}
void *fn_801C83D4(){
 if(!lbl_8056534C) lbl_8056534C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056534C;
}
void *igAttrStackList_getMeta(){
 if(!lbl_8056534C || !(reinterpret_cast<unsigned int *>(lbl_8056534C)[0x24/4]&4)) fn_801C84BC();
 return lbl_8056534C;
}
void *igAttrStackList_vtableRead(){
 UnknownGenObject801C844C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6B34;
 object.unknown00=lbl_804B6AD0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C84BC(){
 fn_80066188((int)igAttrStackList_register);
}
void igAttrStackList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056534C,(int)igObjectList_register,(int)fn_80024180,(int)igAttrStackList_getMetaCall,(int)lbl_804B1820,20,(int)igAttrStackList_vtableRead,0,0,(int)lbl_80560860);
}
void *igAttrStackList_getMetaCall(){return igAttrStackList_getMeta();}
void *fn_801C8570(void *object){
 fn_801C869C();
 return fn_8006546C(lbl_80565350,object);
}
void *igAttrStack_getMeta(){
 if(!lbl_80565350 || !(reinterpret_cast<unsigned int *>(lbl_80565350)[0x24/4]&4)) fn_801C869C();
 return lbl_80565350;
}
void *igAttrStack_vtableRead(){
 UnknownGenObject801C85E4 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 object.unknown00=lbl_804B6A70;
 object.unknown00=lbl_804B6A10;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C869C(){
 fn_80066188((int)igAttrStack_register);
}
void igAttrStack_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565350,(int)igNonRefCountedObjectStack_register,(int)fn_800CB530,(int)igAttrStack_getMetaCall,(int)lbl_804B1840,52,(int)igAttrStack_vtableRead,(int)igAttrStack_fieldInit,0,(int)lbl_804B1830);
}
void *igAttrStack_getMetaCall(){return igAttrStack_getMeta();}
}
#pragma pop
