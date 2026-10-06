#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8028C93C();
void fn_8028CF9C();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804CC7CC[];
extern char lbl_804CD050[];
extern char lbl_80561338[8];
extern void *lbl_805660DC;
void *fn_8028CDAC();
void *fn_8028CDE8();
void fn_8028CEE0();
void fn_8028CF08();
void *fn_8028CF7C();
}
struct UnknownGenRoot8028CDE8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028CDE8(){fn_8006665C(this);}
};
struct UnknownGenObject8028CDE8_0 : UnknownGenRoot8028CDE8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028CDE8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8028CDE8_1 : UnknownGenObject8028CDE8_0 {
 inline ~UnknownGenObject8028CDE8_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8028CDE8 : UnknownGenObject8028CDE8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8028CDE8(){unknown00=lbl_804CD050;}
};
extern "C" {
void *fn_8028CD74(void *object){
 fn_8028CEE0();
 return fn_8006546C(lbl_805660DC,object);
}
void *fn_8028CDAC(){
 if(!lbl_805660DC || !(reinterpret_cast<unsigned int *>(lbl_805660DC)[0x24/4]&4)) fn_8028CEE0();
 return lbl_805660DC;
}
void *fn_8028CDE8(){
 UnknownGenObject8028CDE8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804CD050;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028CEE0(){
 fn_80066188((int)fn_8028CF08);
}
void fn_8028CF08(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660DC,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8028CF7C,(int)lbl_804CC7CC,24,(int)fn_8028CDE8,(int)fn_8028CF9C,0,(int)lbl_80561338);
}
void *fn_8028CF7C(){return fn_8028CDAC();}
}
#pragma pop
