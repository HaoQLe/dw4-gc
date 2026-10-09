#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimationTransitionParams_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B283C[];
extern char lbl_804B285C[];
extern char lbl_804B289C[];
extern char lbl_804B5AFC[];
extern char lbl_804B5B58[];
extern char lbl_804B5BB4[];
extern char lbl_804B5C18[];
extern char lbl_80560A08[8];
extern char lbl_80560A10[8];
extern char lbl_80560A18[8];
extern char lbl_80560A20[8];
extern char lbl_80560A28[8];
extern char lbl_80560A30[8];
extern void *lbl_805621F4;
extern void *lbl_80565548;
extern void *lbl_8056554C;
extern void *lbl_80565558;
void *igAnimationTransitionPointList_getMeta();
void *igAnimationTransitionPointList_vtableRead();
void fn_801CCE50();
void igAnimationTransitionPointList_register();
void *igAnimationTransitionPointList_getMetaCall();
void *igAnimationTransitionPoint_getMeta();
void *igAnimationTransitionPoint_vtableRead();
void fn_801CCFC8();
void igAnimationTransitionPoint_register();
void *igAnimationTransitionPoint_getMetaCall();
void igAnimationTransitionPoint_fieldInit();
void *fn_801CD104();
void *igAnimationTransitionParams_getMeta();
void *igAnimationTransitionParams_vtableRead();
void fn_801CD1BC();
void igAnimationTransitionParams_register();
void *igAnimationTransitionParams_getMetaCall();
}
struct UnknownGenObject801CCDE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCF40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCF40(){fn_8006665C(this);}
};
struct UnknownGenObject801CCF40 : UnknownGenRoot801CCF40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCF40(){unknown00=lbl_804B5B58;}
};
struct UnknownGenObject801CD17C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801CCD68(){
 if(!lbl_80565548) lbl_80565548=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565548;
}
void *igAnimationTransitionPointList_getMeta(){
 if(!lbl_80565548 || !(reinterpret_cast<unsigned int *>(lbl_80565548)[0x24/4]&4)) fn_801CCE50();
 return lbl_80565548;
}
void *igAnimationTransitionPointList_vtableRead(){
 UnknownGenObject801CCDE0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5C18;
 object.unknown00=lbl_804B5BB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCE50(){
 fn_80066188((int)igAnimationTransitionPointList_register);
}
void igAnimationTransitionPointList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565548,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTransitionPointList_getMetaCall,(int)lbl_804B283C,20,(int)igAnimationTransitionPointList_vtableRead,0,0,(int)lbl_80560A08);
}
void *igAnimationTransitionPointList_getMetaCall(){return igAnimationTransitionPointList_getMeta();}
void *igAnimationTransitionPoint_getMeta(){
 if(!lbl_8056554C || !(reinterpret_cast<unsigned int *>(lbl_8056554C)[0x24/4]&4)) fn_801CCFC8();
 return lbl_8056554C;
}
void *igAnimationTransitionPoint_vtableRead(){
 UnknownGenObject801CCF40 object;
 object.unknown00=lbl_804B5B58;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCFC8(){
 fn_80066188((int)igAnimationTransitionPoint_register);
}
void igAnimationTransitionPoint_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056554C,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionPoint_getMetaCall,(int)lbl_804B285C,24,(int)igAnimationTransitionPoint_vtableRead,(int)igAnimationTransitionPoint_fieldInit,0,(int)lbl_80560A10);
}
void *igAnimationTransitionPoint_getMetaCall(){return igAnimationTransitionPoint_getMeta();}
void igAnimationTransitionPoint_fieldInit(){
 void *value0=lbl_8056554C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560A18,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_801CD104();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_80560A20,lbl_80560A28,lbl_80560A30,value1);
}
void *fn_801CD104(){
 if(!lbl_80565558) lbl_80565558=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565558;
}
void *igAnimationTransitionParams_getMeta(){
 if(!lbl_80565558 || !(reinterpret_cast<unsigned int *>(lbl_80565558)[0x24/4]&4)) fn_801CD1BC();
 return lbl_80565558;
}
void *igAnimationTransitionParams_vtableRead(){
 UnknownGenObject801CD17C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B5AFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD1BC(){
 fn_80066188((int)igAnimationTransitionParams_register);
}
void igAnimationTransitionParams_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565558,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionParams_getMetaCall,(int)lbl_804B289C,32,(int)igAnimationTransitionParams_vtableRead,(int)igAnimationTransitionParams_fieldInit,0,0);
}
void *igAnimationTransitionParams_getMetaCall(){return igAnimationTransitionParams_getMeta();}
}
#pragma pop
