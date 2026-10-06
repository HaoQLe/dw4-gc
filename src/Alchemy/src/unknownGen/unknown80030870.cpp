#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void fn_80030AD0();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_8046604C[];
extern char lbl_804729A4[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern char lbl_8055D4B4[8];
extern void *lbl_80561B8C;
void *fn_80030870();
void *fn_800308AC();
void fn_80030A14();
void fn_80030A3C();
void *fn_80030AB0();
}
struct UnknownGenRoot800308AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800308AC(){fn_8006665C(this);}
};
struct UnknownGenObject800308AC_0 : UnknownGenRoot800308AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800308AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800308AC_1 : UnknownGenObject800308AC_0 {
 inline ~UnknownGenObject800308AC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800308AC : UnknownGenObject800308AC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800308AC(){unknown00=lbl_804729A4;}
};
extern "C" {
void *fn_80030870(){
 if(!lbl_80561B8C || !(reinterpret_cast<unsigned int *>(lbl_80561B8C)[0x24/4]&4)) fn_80030A14();
 return lbl_80561B8C;
}
void *fn_800308AC(){
 UnknownGenObject800308AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804729A4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80030A14(){
 fn_80066188((int)fn_80030A3C);
}
void fn_80030A3C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B8C,(int)fn_80032D80,(int)fn_8002942C,(int)fn_80030AB0,(int)lbl_8046604C,44,(int)fn_800308AC,(int)fn_80030AD0,0,(int)lbl_8055D4B4);
}
void *fn_80030AB0(){return fn_80030870();}
}
#pragma pop
