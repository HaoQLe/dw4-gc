#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C2B70();
void fn_801C2DAC();
extern char lbl_804AFF00[];
extern char lbl_804B4EB8[];
extern char lbl_804B4F7C[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char lbl_805606DC[8];
extern void *lbl_80565020;
extern void *lbl_80565030;
void *fn_801C2908();
void *fn_801C2944();
void fn_801C2AAC();
void fn_801C2AD4();
void *fn_801C2B48();
void *fn_801C2B68();
}
struct UnknownGenRoot801C2944 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C2944(){fn_8006665C(this);}
};
struct UnknownGenObject801C2944_0 : UnknownGenRoot801C2944 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C2944_0(){unknown00=lbl_804B4F7C;}
};
struct UnknownGenObject801C2944 : UnknownGenObject801C2944_0 {
 char unknown14[44];
 UnknownGenRefMember unknown40;
 char unknown44[20];
 inline ~UnknownGenObject801C2944(){unknown00=lbl_804B4EB8;}
};
extern "C" {
void *fn_801C28D0(void *object){
 fn_801C2AAC();
 return fn_8006546C(lbl_80565020,object);
}
void *fn_801C2908(){
 if(!lbl_80565020 || !(reinterpret_cast<unsigned int *>(lbl_80565020)[0x24/4]&4)) fn_801C2AAC();
 return lbl_80565020;
}
void *fn_801C2944(){
 UnknownGenObject801C2944 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=lbl_804B4F7C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B4EB8;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C2AAC(){
 fn_80066188((int)fn_801C2AD4);
}
void fn_801C2AD4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565020,(int)fn_801C2DAC,(int)fn_801C2B68,(int)fn_801C2B48,(int)lbl_804AFF00,80,(int)fn_801C2944,(int)fn_801C2B70,0,(int)lbl_805606DC);
}
void *fn_801C2B48(){return fn_801C2908();}
void *fn_801C2B68(){return lbl_80565030;}
}
#pragma pop
