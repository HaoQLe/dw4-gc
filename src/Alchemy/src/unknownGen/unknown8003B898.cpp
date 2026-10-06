#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C31C();
void fn_8002F868();
void *fn_8002F970();
void fn_800300A0();
void *fn_80030248();
void fn_8003BC44();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468944[];
extern char lbl_80468958[];
extern char lbl_804704E4[];
extern char lbl_80470550[];
extern char lbl_80472550[];
extern char lbl_804727A4[];
extern char lbl_8047650C[];
extern char lbl_8055D738[8];
extern void *lbl_80561B18;
extern void *lbl_805620CC;
extern void *lbl_805620D0;
void *fn_8003B8D4();
void fn_8003B96C();
void fn_8003B994();
void *fn_8003B9FC();
void *fn_8003BA40();
void fn_8003BBA8();
void fn_8003BBD0();
}
struct UnknownGenRoot8003B8D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B8D4(){fn_8006665C(this);}
};
struct UnknownGenObject8003B8D4_0 : UnknownGenRoot8003B8D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B8D4_0(){unknown00=lbl_80472550;}
};
struct UnknownGenObject8003B8D4 : UnknownGenObject8003B8D4_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8003B8D4(){unknown00=lbl_804704E4;}
};
struct UnknownGenRoot8003BA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003BA40(){fn_8006665C(this);}
};
struct UnknownGenObject8003BA40_0 : UnknownGenRoot8003BA40 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003BA40_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003BA40_1 : UnknownGenObject8003BA40_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8003BA40_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8003BA40 : UnknownGenObject8003BA40_1 {
 char unknown2C[80];
 UnknownGenRefMember unknown7C;
 char unknown80[8];
 inline ~UnknownGenObject8003BA40(){unknown00=lbl_80470550;}
};
extern "C" {
void *fn_8003B898(){
 if(!lbl_805620CC || !(reinterpret_cast<unsigned int *>(lbl_805620CC)[0x24/4]&4)) fn_8003B96C();
 return lbl_805620CC;
}
void *fn_8003B8D4(){
 UnknownGenObject8003B8D4 object;
 object.unknown00=lbl_80472550;
 object.unknown08.value=0;
 object.unknown00=lbl_804704E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B96C(){
 fn_80066188((int)fn_8003B994);
}
void fn_8003B994(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620CC,(int)fn_8002F868,(int)fn_8003B9FC,(int)fn_8002F970,(int)lbl_80468944,12,(int)fn_8003B8D4,0,0,0);
}
void *fn_8003B9FC(){return lbl_80561B18;}
void *fn_8003BA04(){
 if(!lbl_805620D0 || !(reinterpret_cast<unsigned int *>(lbl_805620D0)[0x24/4]&4)) fn_8003BBA8();
 return lbl_805620D0;
}
void *fn_8003BA40(){
 UnknownGenObject8003BA40 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_80470550;
 object.unknown7C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003BBA8(){
 fn_80066188((int)fn_8003BBD0);
}
void fn_8003BBD0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620D0,(int)fn_800300A0,(int)fn_8002C31C,(int)fn_80030248,(int)lbl_80468958,132,(int)fn_8003BA40,(int)fn_8003BC44,0,(int)lbl_8055D738);
}
}
#pragma pop
