#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80023C68();
void *fn_80023E20();
void fn_8003B15C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_804686AC[];
extern char lbl_80470110[];
extern char lbl_80470C94[];
extern char lbl_8047650C[];
extern char lbl_8055D718[8];
extern void *lbl_80561504;
extern void *lbl_80562074;
void *fn_8003AFC0();
void fn_8003B0B8();
void fn_8003B0E0();
void *fn_8003B154();
}
struct UnknownGenRoot8003AFC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AFC0(){fn_8006665C(this);}
};
struct UnknownGenObject8003AFC0_0 : UnknownGenRoot8003AFC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003AFC0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003AFC0_1 : UnknownGenObject8003AFC0_0 {
 inline ~UnknownGenObject8003AFC0_1(){unknown00=lbl_80470C94;}
};
struct UnknownGenObject8003AFC0 : UnknownGenObject8003AFC0_1 {
 char unknown0C[884];
 UnknownGenRefMember unknown380;
 char unknown384[12];
 inline ~UnknownGenObject8003AFC0(){unknown00=lbl_80470110;}
};
extern "C" {
void *fn_8003AF84(){
 if(!lbl_80562074 || !(reinterpret_cast<unsigned int *>(lbl_80562074)[0x24/4]&4)) fn_8003B0B8();
 return lbl_80562074;
}
void *fn_8003AFC0(){
 UnknownGenObject8003AFC0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80470C94;
 object.unknown00=lbl_80470110;
 object.unknown380.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B0B8(){
 fn_80066188((int)fn_8003B0E0);
}
void fn_8003B0E0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562074,(int)fn_80023C68,(int)fn_8003B154,(int)fn_80023E20,(int)lbl_804686AC,904,(int)fn_8003AFC0,(int)fn_8003B15C,0,(int)lbl_8055D718);
}
void *fn_8003B154(){return lbl_80561504;}
}
#pragma pop
