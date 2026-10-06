#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void fn_801BC594();
extern char lbl_8047650C[];
extern char lbl_804AEE28[];
extern char lbl_804B4038[];
extern char lbl_804B459C[];
extern char lbl_8056051C[8];
extern void *lbl_80564DD8;
void *fn_801BC334();
void *fn_801BC370();
void fn_801BC4D8();
void fn_801BC500();
void *fn_801BC574();
}
struct UnknownGenRoot801BC370 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BC370(){fn_8006665C(this);}
};
struct UnknownGenObject801BC370_0 : UnknownGenRoot801BC370 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BC370_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BC370_1 : UnknownGenObject801BC370_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BC370_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BC370 : UnknownGenObject801BC370_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BC370(){unknown00=lbl_804B459C;}
};
extern "C" {
void *fn_801BC334(){
 if(!lbl_80564DD8 || !(reinterpret_cast<unsigned int *>(lbl_80564DD8)[0x24/4]&4)) fn_801BC4D8();
 return lbl_80564DD8;
}
void *fn_801BC370(){
 UnknownGenObject801BC370 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B459C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BC4D8(){
 fn_80066188((int)fn_801BC500);
}
void fn_801BC500(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DD8,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BC574,(int)lbl_804AEE28,32,(int)fn_801BC370,(int)fn_801BC594,0,(int)lbl_8056051C);
}
void *fn_801BC574(){return fn_801BC334();}
}
#pragma pop
