#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void fn_800299D4();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80464258[];
extern char lbl_8047184C[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_8055D23C[8];
extern void *lbl_80561738;
void *fn_800297E4();
void *fn_80029820();
void fn_80029918();
void fn_80029940();
void *fn_800299B4();
}
struct UnknownGenRoot80029820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029820(){fn_8006665C(this);}
};
struct UnknownGenObject80029820_0 : UnknownGenRoot80029820 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80029820_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80029820_1 : UnknownGenObject80029820_0 {
 inline ~UnknownGenObject80029820_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80029820 : UnknownGenObject80029820_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80029820(){unknown00=lbl_8047184C;}
};
extern "C" {
void *fn_800297E4(){
 if(!lbl_80561738 || !(reinterpret_cast<unsigned int *>(lbl_80561738)[0x24/4]&4)) fn_80029918();
 return lbl_80561738;
}
void *fn_80029820(){
 UnknownGenObject80029820 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_8047184C;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029918(){
 fn_80066188((int)fn_80029940);
}
void fn_80029940(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561738,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800299B4,(int)lbl_80464258,24,(int)fn_80029820,(int)fn_800299D4,0,(int)lbl_8055D23C);
}
void *fn_800299B4(){return fn_800297E4();}
}
#pragma pop
